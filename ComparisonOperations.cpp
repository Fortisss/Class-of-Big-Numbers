#include "Class.h"
#include "Exam.cpp"

//=
BigInt BigInt::operator=(const string& number) {
	int start{ 0 };
	if (number[0] == '-' || isNegative == true) {
		start = 1;
		isNegative = true;
	}
	int size = number.length() - start;
	numbers.resize(size);
	for (int i{ 0 }; i < number.length(); i++) {
		numbers[i - start] = number[i] - '0';
	}
	return *this;
};

//==
bool BigInt::operator==(const BigInt& number) {
	if (this->isNegative != number.isNegative) { return false; }
	if (this->numbers.size() != number.numbers.size() || this->isNegative != number.isNegative) {
		return false;
	}
	for (int i{ 0 }; i < this->numbers.size(); i++) {
		if (this->numbers[i] != number.numbers[i]) {
			return false;
		}
	}
	return true;
};

//!=
bool BigInt::operator!=(const BigInt& number) {
	if (this->isNegative == number.isNegative) { return false; }
	if (this->numbers.size() == number.numbers.size() || this->isNegative == number.isNegative) {
		return false;
	}
	for (int i{ 0 }; i < this->numbers.size(); i++) {
		if (this->numbers[i] == number.numbers[i]) {
			return false;
		}
	}
	return true;
};

//>
bool BigInt::operator>(const BigInt& number) {
	if (this->isNegative == number.isNegative) {
		if (*this == number) { return false; }
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
			return true;
		}
	}
	else if (this->isNegative) { return false; }
	else if (number.isNegative) { return true; }
	else {
		if (*this == number) { return false; }
		if (this->sizeNums < number.sizeNums) { return false; }
		else if (this->sizeNums > number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] < number.numbers[i]) { return false; }
				else if (this->numbers[i] > number.numbers[i]) { return true; }
			}
			return true;
		}

	}
	return false;
};

//<
bool BigInt::operator<(const BigInt& number) {
	if (this->isNegative == number.isNegative) {
		if (*this == number) { return false; }
		if (this->sizeNums < number.sizeNums) { return true; }
		else if (this->sizeNums > number.sizeNums) { return false; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] < number.numbers[i]) { return true; }
				else if (this->numbers[i] > number.numbers[i]) { return false; }
			}
			return true;
		}
	}
	else if (!this->isNegative) { return false; }
	else if (!number.isNegative) { return true; }
	else {
		if (*this == number) { return false; }
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
			return true;
		}
	}
	return false;
};

//>=
bool BigInt::operator>=(const BigInt& number) {
	if (this->isNegative == number.isNegative) {
		if (*this == number) { return true; }
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
			return true;
		}
	}
	else if (this->isNegative) { return false; }
	else if (number.isNegative) { return true; }
	else {
		if (*this == number) { return true; }
		if (this->sizeNums < number.sizeNums) { return false; }
		else if (this->sizeNums > number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] < number.numbers[i]) { return false; }
				else if (this->numbers[i] > number.numbers[i]) { return true; }
			}
			return true;
		}
		return false;
	}
};

//<=
bool BigInt::operator<=(const BigInt& number) {
	if (this->isNegative == number.isNegative) {
		if (*this == number) { return true; }
		if (this->sizeNums < number.sizeNums) { return true; }
		else if (this->sizeNums > number.sizeNums) { return false; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] < number.numbers[i]) { return true; }
				else if (this->numbers[i] > number.numbers[i]) { return false; }
			}
			return true;
		}
	}
	else if (!this->isNegative) { return false; }
	else if (!number.isNegative) { return true; }
	else {
		if (*this == number) { return true; }
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
			return true;
		}
		return false;
	}
};