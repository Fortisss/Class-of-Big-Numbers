#include <iostream>
#include "control.h"
#include <vector>
#include <algorithm>
#include <string>
#include <type_traits>
#include <Windows.h>
#include "Class.cpp"

using namespace std;

//=
BigInt BigInt::operator=(const string& number) {
	int start{ 0 };
	if (number[0] == '-' || isNegative == true) {
		start = 1;
		isNegative = true;
	}
	int size = number.length() - start;
	numbers.resize(size);
	for (int i{ start }; i < number.length(); i++) {
		numbers[i - start] = number[i] - '0';
	}
	return *this;
};

//==
bool BigInt::operator==(const BigInt& number) {
	if (this->isNegative != number.isNegative) { return false; }
	if (this->sizeNums != number.sizeNums) { return false; }
	for (int i{ 0 }; i < this->sizeNums; i++) {
		if (this->numbers[i] != number.numbers[i]) { return false; }
		else { return true; }
	}
	return true;
};

//!=
bool BigInt::operator!=(const BigInt& number) {
	if (this->isNegative != number.isNegative) { return true; }
	if (this->sizeNums != number.sizeNums) { return true; }
	for (int i{ 0 }; i < this->sizeNums; i++) {
		if (this->numbers[i] == number.numbers[i]) { return false; }
		else { return true; }
	}
	return true;
};

//>
bool BigInt::operator>(const BigInt& number) {
	if (*this == number) { return false; }
	if (this->isNegative && number.isNegative) {
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
		}
	}
	else if (this->isNegative) { return false; }
	else if (number.isNegative) { return true; }
	else {
		if (this->sizeNums < number.sizeNums) { return false; }
		else if (this->sizeNums > number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] < number.numbers[i]) { return false; }
				else if (this->numbers[i] > number.numbers[i]) { return true; }
			}
		}
	}
	return false;
};

//<
bool BigInt::operator<(const BigInt& number) {
	if (*this == number) { return false; }
	if (this->isNegative && number.isNegative) {
		if (this->sizeNums < number.sizeNums) { return false; }
		else if (this->sizeNums > number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return true; }
				else if (this->numbers[i] < number.numbers[i]) { return false; }
			}
		}
	}
	else if (this->isNegative) { return true; }
	else if (number.isNegative) { return false; }
	else {
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
		}
	}
	return false;
};

//>=
bool BigInt::operator>=(const BigInt& number) {
	if (*this == number) { return true; }
	if (this->isNegative && number.isNegative) {
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
		}
	}
	else if (this->isNegative) { return false; }
	else if (number.isNegative) { return true; }
	else {
		if (this->sizeNums < number.sizeNums) { return false; }
		else if (this->sizeNums > number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] < number.numbers[i]) { return false; }
				else if (this->numbers[i] > number.numbers[i]) { return true; }
			}
		}
	}
	return false;
};

//<=
bool BigInt::operator<=(const BigInt& number) {
	if (*this == number) { return true; }
	if (this->isNegative && number.isNegative) {
		if (this->sizeNums < number.sizeNums) { return false; }
		else if (this->sizeNums > number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return true; }
				else if (this->numbers[i] < number.numbers[i]) { return false; }
			}
		}
	}
	else if (this->isNegative) { return true; }
	else if (number.isNegative) { return false; }
	else {
		if (this->sizeNums > number.sizeNums) { return false; }
		else if (this->sizeNums < number.sizeNums) { return true; }
		else {
			for (int i{ 0 }; i < this->numbers.size(); i++) {
				if (this->numbers[i] > number.numbers[i]) { return false; }
				else if (this->numbers[i] < number.numbers[i]) { return true; }
			}
		}
	}
	return false;
};

//+
BigInt BigInt::operator+(const BigInt& number) {
	vector<int> result;
	int carry{ 0 };
	int i = sizeNums - 1, j = number.sizeNums - 1;
	while (i >= 0 || j >= 0 || carry != 0) {
		int sum = carry;
		if (i >= 0) {
			sum += numbers[i];
			i--;
		}
		if (j >= 0) {
			sum += number.numbers[j];
			j--;
		}
		carry = sum / 10;
		sum = sum % 10;
		result.push_back(sum);
	}
	reverse(result.begin(), result.end());
	if (this->isNegative && number.isNegative && result[0] != 0) { return BigInt(result, true); }
	if (number.isNegative) { return BigInt(result, false); }
	else if(this->isNegative && result[0] != 0){ return BigInt(result, true); }
	return BigInt(result, false);
};

//-
BigInt BigInt::operator-(const BigInt& number) {
	vector<int> result;
	vector<int>copy;
	if (this->isNegative || number.isNegative) {
		return *this + number;
	}
	if (*this < number) {
		copy.insert(copy.end(), this->numbers.begin(), this->numbers.end());
		*this = number;
		this->isNegative = true;
	}
	else { copy.insert(copy.end(), number.numbers.begin(), number.numbers.end()); }
	int i = sizeNums - 1, j = copy.size() - 1;
	int carry{ 0 };
	if (sizeNums > copy.size()) {
		for (int i{ 0 }; i < sizeNums - copy.size() + 1; i++) {
			copy.insert(copy.begin(), 0);
		}
		j = copy.size() - 1;
	}
	while (i >= 0 && j >= 0) {
		if (numbers[i] >= copy[j]) { result.push_back(numbers[i] - copy[j]); }
		else {
			numbers[i] += 10;
			result.push_back(numbers[i] - copy[j]);
			numbers[i - 1]--;
		}
		i--; j--;
	}
	while (result.size() > 1 && result.back() == 0) {
		result.pop_back();
	}
	reverse(result.begin(), result.end());
	if (this->isNegative) { return BigInt(result, true); }
	return BigInt(result, false);
}

//*
BigInt BigInt::operator*(const BigInt& number) {
	vector<int> result(sizeNums + number.sizeNums, 0);
	int carry = 0;

	for (int i = sizeNums - 1; i >= 0; i--) {
		carry = 0;
		for (int j = number.sizeNums - 1; j >= 0; j--) {
			int sum = (numbers[i] * number.numbers[j]) + carry + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i] += carry;
	}
	while (result.size() > 1 && result.front() == 0) {
		result.erase(result.begin());
	}
	if ((this->isNegative || number.isNegative) && (this->isNegative != number.isNegative) && result[0] != 0) { return BigInt(result, true); }
	return BigInt(result, false);
}