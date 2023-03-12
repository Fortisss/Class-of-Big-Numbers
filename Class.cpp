#include <iostream>
#include "control.h"
#include <vector>
#include <algorithm>
#include <string>
#include <type_traits>
#include <Windows.h>

using namespace std;

class BigInt {
protected:
	vector<int> numbers;
	size_t sizeNums;
	bool isNegative;
public:
	BigInt() : numbers(0), sizeNums(0), isNegative(false) {};
	BigInt(const vector<int>& number, bool isNegative) : numbers(number), sizeNums(size(number)), isNegative(isNegative) {};
	template <typename T, typename = enable_if_t<is_integral_v<T> && !is_same_v<T, bool>>>
	BigInt(const T& number) {
		string numberStr = to_string(number);	
		*this = BigInt(numberStr); };
	BigInt(const string& number) : numbers(), sizeNums(size(number)), isNegative(false) {
		int start{ 0 };
		if (number[0] == '-') {
			isNegative = true;
			sizeNums--;
			start++;
		}
		for (int i{ start }; i < size(number); i++) {
			numbers.push_back(number[i] - '0');
		}
	};

	friend ostream& operator<<(ostream& out, const BigInt& number) {
		if (number.isNegative) cout << "-";
		for (auto n : number.numbers) { cout << n; }
		return out;
	}

	//=
	template <typename T, typename = enable_if_t<is_integral_v<T> && !is_same_v<T, bool>>>
	BigInt operator=(const T& number) { BigInt temp(number); *this = temp;	return *this; };
	BigInt operator=(const string& number);

	//==
	template <typename T, typename = enable_if_t<is_integral_v<T> && !is_same_v<T, bool>>>
	bool operator==(const T& number) { return *this == BigInt(number); };
	bool operator==(const string& number) { return *this == BigInt(number); }
	bool operator==(const BigInt& number);

	//!=
	template <typename T, typename = enable_if_t<is_integral_v<T> && !is_same_v<T, bool>>>
	bool operator!=(const T& number) { return *this != BigInt(number); };
	bool operator!=(const string& number) { return *this != BigInt(number); };
	bool operator!=(const BigInt& number);

	//>
	bool operator>(const BigInt& number);

	//<
	bool operator<(const BigInt& number);

	//>=
	bool operator>=(const BigInt& number);

	//<=
	bool operator<=(const BigInt& number);

	//+
	BigInt operator+(const BigInt& number);

	//-
	BigInt operator-(const BigInt& number);

	//*
	BigInt operator*(const BigInt& number);
};