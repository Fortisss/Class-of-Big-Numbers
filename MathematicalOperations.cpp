#include "Class.h"
#include "Exam.cpp"

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
	if (this->isNegative || number.isNegative) { return BigInt(result, true); }
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
		for (int i{ 0 }; i < sizeNums - copy.size(); i++) {
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
	if ((this->isNegative || number.isNegative) && (this->isNegative != number.isNegative)) { return BigInt(result, true); }
	return BigInt(result, false);
}