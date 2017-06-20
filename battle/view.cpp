#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "view.h"

using namespace std;


	void drawer() {
		HANDLE hConsloe = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTitle(L"Ships");
		const int ROW = 10;
		const int COL = 10;

		CHAR_INFO charPole[COL * ROW];
		for (int i = 0; i < COL * ROW; ++i) {
			charPole[i].Char.UnicodeChar = 'X';
			system("color f0");
		}
	}