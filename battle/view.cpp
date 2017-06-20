#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

class view
{
public:
	view();
	~view();

	HANDLE hConsloe = GetStdHandle(STD_OUTPUT_HANDLE);

	void drawer() {
		SetConsoleTitle(L"Ships");
		const int ROW = 10;
		const int COL = 10;

		CHAR_INFO charPole[COL * ROW];
		for (int i = 0; i < COL * ROW; ++i) {
			charPole[i].Char.UnicodeChar = 'X';
			system("color f0");
		}
	}

};

