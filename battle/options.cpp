#include <conio.h>
#include <iostream>
#include "options.h"

using namespace std;

	void keyAdapter() {
		enum VKey { MVK_UP = 72, MVK_LEFT = 75, MVK_RIGHT = 77, MVK_DOWN = 80, MVK_F12 = 134, MVK_ESC = 27, MVK_ENTER = 13 };
		int ch = 0;

		for (; ; ) {
			ch = _getch();
			if (!_kbhit()) {
				//Отлавливаем нажатие клавиши ENTER
				if (ch == 13) {
					cout << "MVK_ENTER\n";
				}
				//Отлавливаем нажатие клавиши ESC
				if (ch == 27)
					cout << "MVK_ESCAPE\n";
			}

			else if (_kbhit() && (ch == 0x00 || ch == 0xE0)) {
				ch = _getch();
				switch (ch)
				{
				case MVK_LEFT:
					// dosmth
					break;
				case MVK_UP:
					// dosmth
					break;

				case MVK_RIGHT:
					// dosmth
					break;
				case MVK_DOWN:
					// dosmth
					break;

				case MVK_F12:
					// dosmth
					break;

				default:
					// dosmth
					break;
				}
			}
		}
	}


