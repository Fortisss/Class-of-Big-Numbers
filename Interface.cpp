#include <Windows.h>
#include <iostream>
#include <conio.h>
#include "Class.cpp"
#include "control.h"

using namespace std;

void cyrillic() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}

void SetCursorPosition(short x, short y) {
    COORD coord = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ConsoleCursorVisible(bool visible) {
    CONSOLE_CURSOR_INFO info{};
    info.dwSize = 100;
    info.bVisible = visible;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void Output() {
    int num1{ -132 }; long num2{ 12354 }; short num3{ -8546 }; string num4{ "-13564" }; long long num5{ 543 };
    unsigned short num6{ 25123 }; unsigned int num7{ 12123 }; unsigned long num8{ 9416 }; unsigned long long num9{ 54 };
    BigInt num(num1);

    system("cls");

    SetCursorPosition(110, 18);
    cout << "OUTPUT";
    SetCursorPosition(103, 20);
    cout << "Int: " << num;
    num = num2;
    SetCursorPosition(103, 21);
    cout << "Long: " << num;
    num = num5;
    SetCursorPosition(103, 22);
    cout << "Long long: " << num;
    num = num3;
    SetCursorPosition(103, 23);
    cout << "Short: " << num;
    num = num4;
    SetCursorPosition(103, 24);
    cout << "String: " << num;
    num = num7;
    SetCursorPosition(103, 25);
    cout << "Unsigned int: " << num;
    num = num8;
    SetCursorPosition(103, 26);
    cout << "Unsigned long: " << num;
    num = num9;
    SetCursorPosition(103, 27);
    cout << "Unsigned long long: " << num;
    num = num6;
    SetCursorPosition(103, 28);
    cout << "Unsigned short: " << num;
    SetCursorPosition(102, 30);
    cout << "Press [ENTER] to return";
    if (_getch() == ENTER) { Screen(); }
}

void Comprasion(int v) {
    int int1{ 142 }, int2{ -245 };
    long long1{ 543 }, long2{ 471 };
    long long longl1{ -254 }, longl2{ -41 };
    short short1{ 214 }, short2{ 354 };
    string string1{ "-243" }, string2{ "12" };
    unsigned int uint1{ 12 }, uint2{ 0 };
    unsigned long ulong1{ 42 }, ulong2{ 42 };
    unsigned long long ulongl1{ 0 }, ulongl2{ 1 };
    unsigned short ushort1{ 124 }, ushort2{ 23 };
    BigInt num1(int1), num2(int2);

    bool result{};

    system("cls");

    SetCursorPosition(108, 10);
    cout << "COMPRASION";

    if (v == 1) {
        SetCursorPosition(20, 12);
        cout << "=== < ===";

        SetCursorPosition(17, 13);
        cout << "BigInt < BigInt";

        SetCursorPosition(10, 15);
        result = num1 < num2;
        cout << num1 << "(int) < " << num2 << "(int): " << result;

        SetCursorPosition(10, 16);
        num1 = long1; num2 = long2;
        result = num1 < num2;
        cout << num1 << "(long) < " << num2 << "(long): " << result;

        SetCursorPosition(10, 17);
        num1 = longl1; num2 = longl2;
        result = num1 < num2;
        cout << num1 << "(long long) < " << num2 << "(long long): " << result;

        SetCursorPosition(10, 18);
        num1 = short1; num2 = short2;
        result = num1 < num2;
        cout << num1 << "(short) < " << num2 << "(short): " << result;

        SetCursorPosition(10, 19);
        num1 = string1; num2 = string2;
        result = num1 < num2;
        cout << num1 << "(string) < " << num2 << "(string): " << result;

        SetCursorPosition(10, 20);
        num1 = uint1; num2 = uint2;
        result = num1 < num2;
        cout << num1 << "(unsigned int) < " << num2 << "(unsigned int): " << result;

        SetCursorPosition(10, 21);
        num1 = ulong1; num2 = ulong2;
        result = num1 < num2;
        cout << num1 << "(unsigned long) < " << num2 << "(unsigned long): " << result;

        SetCursorPosition(10, 22);
        num1 = ulongl1; num2 = ulongl2;
        result = num1 < num2;
        cout << num1 << "(unsigned l long) < " << num2 << "(unsigned l long): " << result;

        SetCursorPosition(10, 23);
        num1 = ushort1; num2 = ushort2;
        result = num1 < num2;
        cout << num1 << "(unsigned short) < " << num2 << "(unsigned short): " << result;

        //
        SetCursorPosition(17, 25);
        cout << "BigInt < another_type";

        SetCursorPosition(10, 27);
        num1 = int1;
        result = num1 < int2;
        cout << num1 << "(int) < " << int2 << "(int): " << result;

        SetCursorPosition(10, 28);
        num1 = long1;
        result = num1 < long2;
        cout << num1 << "(long) < " << long2 << "(long): " << result;

        SetCursorPosition(10, 29);
        num1 = longl1;
        result = num1 < longl2;
        cout << num1 << "(long long) < " << longl2 << "(long long): " << result;

        SetCursorPosition(10, 30);
        num1 = short1;
        result = num1 < short2;
        cout << num1 << "(short) < " << short2 << "(short): " << result;

        SetCursorPosition(10, 31);
        num1 = string1;
        result = num1 < string2;
        cout << num1 << "(string) < " << string2 << "(string): " << result;

        SetCursorPosition(10, 32);
        num1 = uint1;
        result = num1 < uint2;
        cout << num1 << "(unsigned int) < " << uint2 << "(unsigned int): " << result;

        SetCursorPosition(10, 33);
        num1 = ulong1;
        result = num1 < ulong2;
        cout << num1 << "(unsigned long) < " << ulong2 << "(unsigned long): " << result;

        SetCursorPosition(10, 34);
        num1 = ulongl1;
        result = num1 < ulongl2;
        cout << num1 << "(unsigned l long) < " << ulongl2 << "(unsigned l long): " << result;

        SetCursorPosition(10, 35);
        num1 = ushort1;
        result = num1 < ushort2;
        cout << num1 << "(unsigned short) < " << ushort2 << "(unsigned short): " << result;

        //=============== > 
        SetCursorPosition(78, 12);
        cout << "=== > ===";

        SetCursorPosition(75, 13);
        cout << "BigInt > BigInt";

        SetCursorPosition(70, 15);
        result = num1 > num2;
        cout << num1 << "(int) > " << num2 << "(int): " << result;

        SetCursorPosition(70, 16);
        num1 = long1; num2 = long2;
        result = num1 > num2;
        cout << num1 << "(long) > " << num2 << "(long): " << result;

        SetCursorPosition(70, 17);
        num1 = longl1; num2 = longl2;
        result = num1 > num2;
        cout << num1 << "(long long) > " << num2 << "(long long): " << result;

        SetCursorPosition(70, 18);
        num1 = short1; num2 = short2;
        result = num1 > num2;
        cout << num1 << "(short) > " << num2 << "(short): " << result;

        SetCursorPosition(70, 19);
        num1 = string1; num2 = string2;
        result = num1 > num2;
        cout << num1 << "(string) > " << num2 << "(string): " << result;

        SetCursorPosition(70, 20);
        num1 = uint1; num2 = uint2;
        result = num1 > num2;
        cout << num1 << "(unsigned int) > " << num2 << "(unsigned int): " << result;

        SetCursorPosition(70, 21);
        num1 = ulong1; num2 = ulong2;
        result = num1 > num2;
        cout << num1 << "(unsigned long) > " << num2 << "(unsigned long): " << result;

        SetCursorPosition(70, 22);
        num1 = ulongl1; num2 = ulongl2;
        result = num1 > num2;
        cout << num1 << "(unsigned l long) > " << num2 << "(unsigned l long): " << result;

        SetCursorPosition(70, 23);
        num1 = ushort1; num2 = ushort2;
        result = num1 > num2;
        cout << num1 << "(unsigned short) > " << num2 << "(unsigned short): " << result;

        //
        SetCursorPosition(75, 25);
        cout << "BigInt > another_type";

        SetCursorPosition(70, 27);
        num1 = int1;
        result = num1 > int2;
        cout << num1 << "(int) > " << int2 << "(int): " << result;

        SetCursorPosition(70, 28);
        num1 = long1;
        result = num1 > long2;
        cout << num1 << "(long) > " << long2 << "(long): " << result;

        SetCursorPosition(70, 29);
        num1 = longl1;
        result = num1 > longl2;
        cout << num1 << "(long long) > " << longl2 << "(long long): " << result;

        SetCursorPosition(70, 30);
        num1 = short1;
        result = num1 > short2;
        cout << num1 << "(short) > " << short2 << "(short): " << result;

        SetCursorPosition(70, 31);
        num1 = string1;
        result = num1 > string2;
        cout << num1 << "(string) > " << string2 << "(string): " << result;

        SetCursorPosition(70, 32);
        num1 = uint1;
        result = num1 > uint2;
        cout << num1 << "(unsigned int) > " << uint2 << "(unsigned int): " << result;

        SetCursorPosition(70, 33);
        num1 = ulong1;
        result = num1 > ulong2;
        cout << num1 << "(unsigned long) > " << ulong2 << "(unsigned long): " << result;

        SetCursorPosition(70, 34);
        num1 = ulongl1;
        result = num1 > ulongl2;
        cout << num1 << "(unsigned l long) > " << ulongl2 << "(unsigned l long): " << result;

        SetCursorPosition(70, 35);
        num1 = ushort1;
        result = num1 > ushort2;
        cout << num1 << "(unsigned short) > " << ushort2 << "(unsigned short): " << result;

        //=============== <= 
        SetCursorPosition(136, 12);
        cout << "=== <= ===";

        SetCursorPosition(133, 13);
        cout << "BigInt <= BigInt";

        SetCursorPosition(128, 15);
        result = num1 <= num2;
        cout << num1 << "(int) <= " << num2 << "(int): " << result;

        SetCursorPosition(128, 16);
        num1 = long1; num2 = long2;
        result = num1 <= num2;
        cout << num1 << "(long) <= " << num2 << "(long): " << result;

        SetCursorPosition(128, 17);
        num1 = longl1; num2 = longl2;
        result = num1 <= num2;
        cout << num1 << "(long long) <= " << num2 << "(long long): " << result;

        SetCursorPosition(128, 18);
        num1 = short1; num2 = short2;
        result = num1 <= num2;
        cout << num1 << "(short) <= " << num2 << "(short): " << result;

        SetCursorPosition(128, 19);
        num1 = string1; num2 = string2;
        result = num1 <= num2;
        cout << num1 << "(string) <= " << num2 << "(string): " << result;

        SetCursorPosition(128, 20);
        num1 = uint1; num2 = uint2;
        result = num1 <= num2;
        cout << num1 << "(unsigned int) <= " << num2 << "(unsigned int): " << result;

        SetCursorPosition(128, 21);
        num1 = ulong1; num2 = ulong2;
        result = num1 <= num2;
        cout << num1 << "(unsigned long) <= " << num2 << "(unsigned long): " << result;

        SetCursorPosition(128, 22);
        num1 = ulongl1; num2 = ulongl2;
        result = num1 <= num2;
        cout << num1 << "(unsigned l long) <= " << num2 << "(unsigned l long): " << result;

        SetCursorPosition(128, 23);
        num1 = ushort1; num2 = ushort2;
        result = num1 <= num2;
        cout << num1 << "(unsigned short) <= " << num2 << "(unsigned short): " << result;

        //
        SetCursorPosition(130, 25);
        cout << "BigInt <= another_type";

        SetCursorPosition(128, 27);
        num1 = int1;
        result = num1 <= int2;
        cout << num1 << "(int) <= " << int2 << "(int): " << result;

        SetCursorPosition(128, 28);
        num1 = long1;
        result = num1 <= long2;
        cout << num1 << "(long) <= " << long2 << "(long): " << result;

        SetCursorPosition(128, 29);
        num1 = longl1;
        result = num1 <= longl2;
        cout << num1 << "(long long) <= " << longl2 << "(long long): " << result;

        SetCursorPosition(128, 30);
        num1 = short1;
        result = num1 <= short2;
        cout << num1 << "(short) <= " << short2 << "(short): " << result;

        SetCursorPosition(128, 31);
        num1 = string1;
        result = num1 <= string2;
        cout << num1 << "(string) <= " << string2 << "(string): " << result;

        SetCursorPosition(128, 32);
        num1 = uint1;
        result = num1 <= uint2;
        cout << num1 << "(unsigned int) <= " << uint2 << "(unsigned int): " << result;

        SetCursorPosition(128, 33);
        num1 = ulong1;
        result = num1 <= ulong2;
        cout << num1 << "(unsigned long) <= " << ulong2 << "(unsigned long): " << result;

        SetCursorPosition(128, 34);
        num1 = ulongl1;
        result = num1 <= ulongl2;
        cout << num1 << "(unsigned l long) <= " << ulongl2 << "(unsigned l long): " << result;

        SetCursorPosition(128, 35);
        num1 = ushort1;
        result = num1 <= ushort2;
        cout << num1 << "(unsigned short) <= " << ushort2 << "(unsigned short): " << result;

        //=============== >= 
        SetCursorPosition(194, 12);
        cout << "=== >= ===";

        SetCursorPosition(191, 13);
        cout << "BigInt >= BigInt";

        SetCursorPosition(186, 15);
        result = num1 >= num2;
        cout << num1 << "(int) >= " << num2 << "(int): " << result;

        SetCursorPosition(186, 16);
        num1 = long1; num2 = long2;
        result = num1 >= num2;
        cout << num1 << "(long) >= " << num2 << "(long): " << result;

        SetCursorPosition(186, 17);
        num1 = longl1; num2 = longl2;
        result = num1 >= num2;
        cout << num1 << "(long long) >= " << num2 << "(long long): " << result;

        SetCursorPosition(186, 18);
        num1 = short1; num2 = short2;
        result = num1 >= num2;
        cout << num1 << "(short) >= " << num2 << "(short): " << result;

        SetCursorPosition(186, 19);
        num1 = string1; num2 = string2;
        result = num1 >= num2;
        cout << num1 << "(string) >= " << num2 << "(string): " << result;

        SetCursorPosition(186, 20);
        num1 = uint1; num2 = uint2;
        result = num1 >= num2;
        cout << num1 << "(unsigned int) >= " << num2 << "(unsigned int): " << result;

        SetCursorPosition(186, 21);
        num1 = ulong1; num2 = ulong2;
        result = num1 >= num2;
        cout << num1 << "(unsigned long) >= " << num2 << "(unsigned long): " << result;

        SetCursorPosition(186, 22);
        num1 = ulongl1; num2 = ulongl2;
        result = num1 >= num2;
        cout << num1 << "(unsigned l long) >= " << num2 << "(unsigned l long): " << result;

        SetCursorPosition(186, 23);
        num1 = ushort1; num2 = ushort2;
        result = num1 >= num2;
        cout << num1 << "(unsigned short) >= " << num2 << "(unsigned short): " << result;

        //
        SetCursorPosition(191, 25);
        cout << "BigInt >= another_type";

        SetCursorPosition(186, 27);
        num1 = int1;
        result = num1 >= int2;
        cout << num1 << "(int) >= " << int2 << "(int): " << result;

        SetCursorPosition(186, 28);
        num1 = long1;
        result = num1 >= long2;
        cout << num1 << "(long) >= " << long2 << "(long): " << result;

        SetCursorPosition(186, 29);
        num1 = longl1;
        result = num1 >= longl2;
        cout << num1 << "(long long) >= " << longl2 << "(long long): " << result;

        SetCursorPosition(186, 30);
        num1 = short1;
        result = num1 >= short2;
        cout << num1 << "(short) >= " << short2 << "(short): " << result;

        SetCursorPosition(186, 31);
        num1 = string1;
        result = num1 >= string2;
        cout << num1 << "(string) >= " << string2 << "(string): " << result;

        SetCursorPosition(186, 32);
        num1 = uint1;
        result = num1 >= uint2;
        cout << num1 << "(unsigned int) >= " << uint2 << "(unsigned int): " << result;

        SetCursorPosition(186, 33);
        num1 = ulong1;
        result = num1 >= ulong2;
        cout << num1 << "(unsigned long) >= " << ulong2 << "(unsigned long): " << result;

        SetCursorPosition(186, 34);
        num1 = ulongl1;
        result = num1 >= ulongl2;
        cout << num1 << "(unsigned l long) >= " << ulongl2 << "(unsigned l long): " << result;

        SetCursorPosition(186, 35);
        num1 = ushort1;
        result = num1 >= ushort2;
        cout << num1 << "(unsigned short) >= " << ushort2 << "(unsigned short): " << result;
    }
    else if (v == 2) {
        //=============== == 
        SetCursorPosition(78, 12);
        cout << "=== == ===";

        SetCursorPosition(75, 13);
        cout << "BigInt == BigInt";

        SetCursorPosition(70, 15);
        result = num1 == num2;
        cout << num1 << "(int) == " << num2 << "(int): " << result;

        SetCursorPosition(70, 16);
        num1 = long1; num2 = long2;
        result = num1 == num2;
        cout << num1 << "(long) == " << num2 << "(long): " << result;

        SetCursorPosition(70, 17);
        num1 = longl1; num2 = longl2;
        result = num1 == num2;
        cout << num1 << "(long long) == " << num2 << "(long long): " << result;

        SetCursorPosition(70, 18);
        num1 = short1; num2 = short2;
        result = num1 == num2;
        cout << num1 << "(short) == " << num2 << "(short): " << result;

        SetCursorPosition(70, 19);
        num1 = string1; num2 = string2;
        result = num1 == num2;
        cout << num1 << "(string) == " << num2 << "(string): " << result;

        SetCursorPosition(70, 20);
        num1 = uint1; num2 = uint2;
        result = num1 == num2;
        cout << num1 << "(unsigned int) == " << num2 << "(unsigned int): " << result;

        SetCursorPosition(70, 21);
        num1 = ulong1; num2 = ulong2;
        result = num1 == num2;
        cout << num1 << "(unsigned long) == " << num2 << "(unsigned long): " << result;

        SetCursorPosition(70, 22);
        num1 = ulongl1; num2 = ulongl2;
        result = num1 == num2;
        cout << num1 << "(unsigned l long) == " << num2 << "(unsigned l long): " << result;

        SetCursorPosition(70, 23);
        num1 = ushort1; num2 = ushort2;
        result = num1 == num2;
        cout << num1 << "(unsigned short) == " << num2 << "(unsigned short): " << result;

        //
        SetCursorPosition(75, 25);
        cout << "BigInt == another_type";

        SetCursorPosition(70, 27);
        num1 = int1;
        result = num1 == int2;
        cout << num1 << "(int) == " << int2 << "(int): " << result;

        SetCursorPosition(70, 28);
        num1 = long1;
        result = num1 == long2;
        cout << num1 << "(long) == " << long2 << "(long): " << result;

        SetCursorPosition(70, 29);
        num1 = longl1;
        result = num1 == longl2;
        cout << num1 << "(long long) == " << longl2 << "(long long): " << result;

        SetCursorPosition(70, 30);
        num1 = short1;
        result = num1 == short2;
        cout << num1 << "(short) == " << short2 << "(short): " << result;

        SetCursorPosition(70, 31);
        num1 = string1;
        result = num1 == string2;
        cout << num1 << "(string) == " << string2 << "(string): " << result;

        SetCursorPosition(70, 32);
        num1 = uint1;
        result = num1 == uint2;
        cout << num1 << "(unsigned int) == " << uint2 << "(unsigned int): " << result;

        SetCursorPosition(70, 33);
        num1 = ulong1;
        result = num1 == ulong2;
        cout << num1 << "(unsigned long) == " << ulong2 << "(unsigned long): " << result;

        SetCursorPosition(70, 34);
        num1 = ulongl1;
        result = num1 == ulongl2;
        cout << num1 << "(unsigned l long) == " << ulongl2 << "(unsigned l long): " << result;

        SetCursorPosition(70, 35);
        num1 = ushort1;
        result = num1 == ushort2;
        cout << num1 << "(unsigned short) == " << ushort2 << "(unsigned short): " << result;

        //=============== != 
        SetCursorPosition(136, 12);
        cout << "=== != ===";

        SetCursorPosition(133, 13);
        cout << "BigInt != BigInt";

        SetCursorPosition(128, 15);
        result = num1 != num2;
        cout << num1 << "(int) != " << num2 << "(int): " << result;

        SetCursorPosition(128, 16);
        num1 = long1; num2 = long2;
        result = num1 != num2;
        cout << num1 << "(long) != " << num2 << "(long): " << result;

        SetCursorPosition(128, 17);
        num1 = longl1; num2 = longl2;
        result = num1 != num2;
        cout << num1 << "(long long) != " << num2 << "(long long): " << result;

        SetCursorPosition(128, 18);
        num1 = short1; num2 = short2;
        result = num1 != num2;
        cout << num1 << "(short) != " << num2 << "(short): " << result;

        SetCursorPosition(128, 19);
        num1 = string1; num2 = string2;
        result = num1 != num2;
        cout << num1 << "(string) != " << num2 << "(string): " << result;

        SetCursorPosition(128, 20);
        num1 = uint1; num2 = uint2;
        result = num1 != num2;
        cout << num1 << "(unsigned int) != " << num2 << "(unsigned int): " << result;

        SetCursorPosition(128, 21);
        num1 = ulong1; num2 = ulong2;
        result = num1 != num2;
        cout << num1 << "(unsigned long) != " << num2 << "(unsigned long): " << result;

        SetCursorPosition(128, 22);
        num1 = ulongl1; num2 = ulongl2;
        result = num1 != num2;
        cout << num1 << "(unsigned l long) != " << num2 << "(unsigned l long): " << result;

        SetCursorPosition(128, 23);
        num1 = ushort1; num2 = ushort2;
        result = num1 != num2;
        cout << num1 << "(unsigned short) != " << num2 << "(unsigned short): " << result;

        //
        SetCursorPosition(130, 25);
        cout << "BigInt != another_type";

        SetCursorPosition(128, 27);
        num1 = int1;
        result = num1 != int2;
        cout << num1 << "(int) != " << int2 << "(int): " << result;

        SetCursorPosition(128, 28);
        num1 = long1;
        result = num1 != long2;
        cout << num1 << "(long) != " << long2 << "(long): " << result;

        SetCursorPosition(128, 29);
        num1 = longl1;
        result = num1 != longl2;
        cout << num1 << "(long long) != " << longl2 << "(long long): " << result;

        SetCursorPosition(128, 30);
        num1 = short1;
        result = num1 != short2;
        cout << num1 << "(short) != " << short2 << "(short): " << result;

        SetCursorPosition(128, 31);
        num1 = string1;
        result = num1 != string2;
        cout << num1 << "(string) != " << string2 << "(string): " << result;

        SetCursorPosition(128, 32);
        num1 = uint1;
        result = num1 != uint2;
        cout << num1 << "(unsigned int) != " << uint2 << "(unsigned int): " << result;

        SetCursorPosition(128, 33);
        num1 = ulong1;
        result = num1 != ulong2;
        cout << num1 << "(unsigned long) != " << ulong2 << "(unsigned long): " << result;

        SetCursorPosition(128, 34);
        num1 = ulongl1;
        result = num1 != ulongl2;
        cout << num1 << "(unsigned l long) != " << ulongl2 << "(unsigned l long): " << result;

        SetCursorPosition(128, 35);
        num1 = ushort1;
        result = num1 != ushort2;
        cout << num1 << "(unsigned short) != " << ushort2 << "(unsigned short): " << result;
    }

    SetCursorPosition(102, 40);
    cout << "Press [ENTER] to return";
    if (_getch() == ENTER) { Screen(); }
}

void Math() {
    int int1{ 12 }, int2{ 3 };
    long long1{ -2 }, long2{ 4 };
    long long longl1{ 0 }, longl2{ -1 };
    short short1{ -4 }, short2{ -3 };
    string string1{ "15" }, string2{ "16" };
    unsigned int uint1{ 20 }, uint2{ 100 };
    unsigned long ulong1{ 250 }, ulong2{ 478 };
    unsigned long long ulongl1{ 32 }, ulongl2{ 1 };
    unsigned short ushort1{ 423 }, ushort2{ 2 };
    BigInt num1(int1), num2(int2);

    system("cls");

    SetCursorPosition(108, 10);
    cout << "MATH";

    //=============== +
    SetCursorPosition(40, 12);
    cout << "=== + ===";

    SetCursorPosition(37, 13);
    cout << "BigInt + BigInt";

    SetCursorPosition(33, 15);
    cout << num1 << "(int) + " << num2 << "(int): " << num1+num2;

    SetCursorPosition(33, 16);
    num1 = long1; num2 = long2;
    cout << num1 << "(long) + " << num2 << "(long): " << num1 + num2;

    SetCursorPosition(33, 17);
    num1 = longl1; num2 = longl2;
    cout << num1 << "(long long) + " << num2 << "(long long): " << num1 + num2;

    SetCursorPosition(33, 18);
    num1 = short1; num2 = short2;
    cout << num1 << "(short) + " << num2 << "(short): " << num1 + num2;

    SetCursorPosition(33, 19);
    num1 = string1; num2 = string2;
    cout << num1 << "(string) + " << num2 << "(string): " << num1 + num2;

    SetCursorPosition(33, 20);
    num1 = uint1; num2 = uint2;
    cout << num1 << "(unsigned int) + " << num2 << "(unsigned int): " << num1 + num2;

    SetCursorPosition(33, 21);
    num1 = ulong1; num2 = ulong2;
    cout << num1 << "(unsigned long) + " << num2 << "(unsigned long): " << num1 + num2;

    SetCursorPosition(33, 22);
    num1 = ulongl1; num2 = ulongl2;
    cout << num1 << "(unsigned l long) + " << num2 << "(unsigned l long): " << num1 + num2;

    SetCursorPosition(33, 23);
    num1 = ushort1; num2 = ushort2;
    cout << num1 << "(unsigned short) + " << num2 << "(unsigned short): " << num1 + num2;

    //===

    SetCursorPosition(37, 25);
    cout << "BigInt + any_type";

    SetCursorPosition(33, 27);
    num1 = int1;
    cout << num1 << "(int) + " << int2 << "(int): " << num1 + int2;

    SetCursorPosition(33, 28);
    num1 = long1;
    cout << num1 << "(long) + " << long2 << "(long): " << num1 + long2;

    SetCursorPosition(33, 29);
    num1 = longl1;
    cout << num1 << "(long long) + " << longl2 << "(long long): " << num1 + longl2;

    SetCursorPosition(33, 30);
    num1 = short1;
    cout << num1 << "(short) + " << short2 << "(short): " << num1 + short2;

    SetCursorPosition(33, 31);
    num1 = string1;
    cout << num1 << "(string) + " << string2 << "(string): " << num1 + string2;

    SetCursorPosition(33, 32);
    num1 = uint1;
    cout << num1 << "(unsigned int) + " << uint2 << "(unsigned int): " << num1 + uint2;

    SetCursorPosition(33, 33);
    num1 = ulong1;
    cout << num1 << "(unsigned long) + " << ulong2 << "(unsigned long): " << num1 + ulong2;

    SetCursorPosition(33, 34);
    num1 = ulongl1;
    cout << num1 << "(unsigned l long) + " << ulongl2 << "(unsigned l long): " << num1 + ulongl2;

    SetCursorPosition(33, 35);
    num1 = ushort1;
    cout << num1 << "(unsigned short) + " << ushort2 << "(unsigned short): " << num1 + ushort2;

    //=============== -
    SetCursorPosition(100, 12);
    cout << "=== - ===";

    SetCursorPosition(97, 13);
    cout << "BigInt - BigInt";

    SetCursorPosition(93, 15);
    num1 = int1; num2 = int2;
    num1 = num1 - num2;
    cout << int1 << "(int) - " << num2 << "(int): " << num1;

    SetCursorPosition(93, 16);
    num1 = long1; num2 = long2;
    num1 = num1 - num2;
    cout << long1 << "(long) - " << num2 << "(long): " << num1;

    SetCursorPosition(93, 17);
    num1 = longl1; num2 = longl2;
    num1 = num1 - num2;
    cout << longl1 << "(long long) - " << num2 << "(long long): " << num1;

    SetCursorPosition(93, 18);
    num1 = short1; num2 = short2;
    num1 = num1 - num2;
    cout << short1 << "(short) - " << num2 << "(short): " << num1;

    SetCursorPosition(93, 19);
    num1 = string1; num2 = string2;
    num1 = num1 - num2;
    cout << string1 << "(string) - " << num2 << "(string): " << num1;

    SetCursorPosition(93, 20);
    num1 = uint1; num2 = uint2;
    num1 = num1 - num2;
    cout << uint1 << "(unsigned int) - " << num2 << "(unsigned int): " << num1;

    SetCursorPosition(93, 21);
    num1 = ulong1; num2 = ulong2;
    num1 = num1 - num2;
    cout << ulong1 << "(unsigned long) - " << num2 << "(unsigned long): " << num1;

    SetCursorPosition(93, 22);
    num1 = ulongl1; num2 = ulongl2;
    num1 = num1 - num2;
    cout << ulongl1 << "(unsigned l long) - " << num2 << "(unsigned l long): " << num1;

    SetCursorPosition(93, 23);
    num1 = ushort1; num2 = ushort2;
    num1 = num1 - num2;
    cout << ushort1 << "(unsigned short) - " << num2 << "(unsigned short): " << num1;

    //=======
    SetCursorPosition(97, 25);
    cout << "BigInt - any_type";

    SetCursorPosition(93, 27);
    num1 = int1;
    num1 = num1 - int2;
    cout << int1 << "(int) - " << int2 << "(int): " << num1;

    SetCursorPosition(93, 28);
    num1 = long1;
    num1 = num1 - long2;
    cout << long1 << "(long) - " << long2 << "(long): " << num1;

    SetCursorPosition(93, 29);
    num1 = longl1;
    num1 = num1 - longl2;
    cout << longl1 << "(long long) - " << longl2 << "(long long): " << num1;

    SetCursorPosition(93, 30);
    num1 = short1;
    num1 = num1 - short2;
    cout << short1 << "(short) - " << short2 << "(short): " << num1;

    SetCursorPosition(93, 31);
    num1 = string1;
    num1 = num1 - string2;
    cout << string1 << "(string) - " << string2 << "(string): " << num1;

    SetCursorPosition(93, 32);
    num1 = uint1;
    num1 = num1 - uint2;
    cout << uint1 << "(unsigned int) - " << uint2 << "(unsigned int): " << num1;

    SetCursorPosition(93, 33);
    num1 = ulong1;
    num1 = num1 - ulong2;
    cout << ulong1 << "(unsigned long) - " << ulong2 << "(unsigned long): " << num1;

    SetCursorPosition(93, 34);
    num1 = ulongl1;
    num1 = num1 - ulongl2;
    cout << ulongl1 << "(unsigned l long) - " << ulongl2 << "(unsigned l long): " << num1;

    SetCursorPosition(93, 35);
    num1 = ushort1;
    num1 = num1 - ushort2;
    cout << ushort1 << "(unsigned short) - " << ushort2 << "(unsigned short): " << num1;

    //=============== *
    SetCursorPosition(160, 12);
    cout << "=== * ===";

    SetCursorPosition(157, 13);
    cout << "BigInt * BigInt";

    SetCursorPosition(153, 15);
    num1 = int1; num2 = int2;
    cout << num1 << "(int) * " << num2 << "(int): " << num1 * num2;

    SetCursorPosition(153, 16);
    num1 = long1; num2 = long2;
    cout << num1 << "(long) * " << num2 << "(long): " << num1 * num2;

    SetCursorPosition(153, 17);
    num1 = longl1; num2 = longl2;
    cout << num1 << "(long long) * " << num2 << "(long long): " << num1 * num2;

    SetCursorPosition(153, 18);
    num1 = short1; num2 = short2;
    cout << num1 << "(short) * " << num2 << "(short): " << num1 * num2;

    SetCursorPosition(153, 19);
    num1 = string1; num2 = string2;
    cout << num1 << "(string) * " << num2 << "(string): " << num1 * num2;

    SetCursorPosition(153, 20);
    num1 = uint1; num2 = uint2;
    cout << num1 << "(unsigned int) * " << num2 << "(unsigned int): " << num1 * num2;

    SetCursorPosition(153, 21);
    num1 = ulong1; num2 = ulong2;
    cout << num1 << "(unsigned long) * " << num2 << "(unsigned long): " << num1 * num2;

    SetCursorPosition(153, 22);
    num1 = ulongl1; num2 = ulongl2;
    cout << num1 << "(unsigned l long) * " << num2 << "(unsigned l long): " << num1 * num2;

    SetCursorPosition(153, 23);
    num1 = ushort1; num2 = ushort2;
    cout << num1 << "(unsigned short) * " << num2 << "(unsigned short): " << num1 * num2;

    //==

    SetCursorPosition(157, 25);
    cout << "BigInt * any_type";

    SetCursorPosition(153, 27);
    num1 = int1;
    cout << num1 << "(int) * " << int2 << "(int): " << num1 * int2;

    SetCursorPosition(153, 28);
    num1 = long1;
    cout << num1 << "(long) * " << long2 << "(long): " << num1 * long2;

    SetCursorPosition(153, 29);
    num1 = longl1;
    cout << num1 << "(long long) * " << longl2 << "(long long): " << num1 * longl2;

    SetCursorPosition(153, 30);
    num1 = short1;
    cout << num1 << "(short) * " << short2 << "(short): " << num1 * short2;

    SetCursorPosition(153, 31);
    num1 = string1; 
    cout << num1 << "(string) * " << string2 << "(string): " << num1 * string2;

    SetCursorPosition(153, 32);
    num1 = uint1; 
    cout << num1 << "(unsigned int) * " << uint2 << "(unsigned int): " << num1 * uint2;

    SetCursorPosition(153, 33);
    num1 = ulong1;
    cout << num1 << "(unsigned long) * " << ulong2 << "(unsigned long): " << num1 * ulong2;

    SetCursorPosition(153, 34);
    num1 = ulongl1;
    cout << num1 << "(unsigned l long) * " << ulongl2 << "(unsigned l long): " << num1 * ulongl2;

    SetCursorPosition(153, 35);
    num1 = ushort1;
    cout << num1 << "(unsigned short) * " << ushort2 << "(unsigned short): " << num1 * ushort2;

    SetCursorPosition(102, 40);
    cout << "Press [ENTER] to return";
    if (_getch() == ENTER) { Screen(); }
}

void Screen() {
    HWND hwnd = GetConsoleWindow();
    if (hwnd != NULL) { MoveWindow(hwnd, 340, 90, 1880, 950, TRUE); }

    int var{ 0 }, x{ 110 }, y{ 22 };
    bool isMenu = true;
    bool isEnter = false;
    bool exit = false;
    system("cls");

    while (!exit) {

        SetCursorPosition(x, 20);
        cout << "Class BigInt" << endl;
        SetCursorPosition(x - 12, 21);
        cout << "--------------------------------------" << endl;
        SetCursorPosition(x - 4, 22);
        cout << "Check the output" << endl;
        SetCursorPosition(x - 4, 23);
        cout << "Check comparison(<, >, <=, >=) operations" << endl;
        SetCursorPosition(x - 4, 24);
        cout << "Check comparison(==, !=) operations" << endl;
        SetCursorPosition(x - 4, 25);
        cout << "Check mathematical operations" << endl;
        SetCursorPosition(x - 12, 26);
        cout << "--------------------------------------" << endl;

        do {
            SetCursorPosition(x - 12, y);
            cout << ">";

            int key = _getch();
            switch (key) {
            case UP_ARROW:
                if (y <= 22) {
                    break;
                }
                else {
                    SetCursorPosition(x - 12, y);
                    cout << " ";
                    y--;
                    var--;
                    break;
                }
            case DOWN_ARROW:
                if (y >= 25) {
                    break;
                }
                else {
                    SetCursorPosition(x - 12, y);
                    cout << " ";
                    y++;
                    var++;
                    break;
                }
            case ENTER:
                isMenu = false;
                isEnter = true;
                break;
            case ESC:
                break;
            default:
                break;
            }
        } while (isMenu);
        system("cls");
        while (isEnter) {
            switch (var) {
            case 0:
                Output();
                isEnter = false;
                break;
            case 1:
                Comprasion(var);
                isEnter = false;
                break;
            case 2:
                Comprasion(var);
                isEnter = false;
                break;
            case 3:
                Math();
                isEnter = false;
                break;
            default:
                break;
            }
        }
    }
}