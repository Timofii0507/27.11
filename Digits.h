#ifndef digits_h
#define digits_h

#include "lib.h"

struct Digits
{
	static void move_coord(short x, short y)
	{
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { x, y };
		SetConsoleCursorPosition(output, pos);
	}
public:
	static void double_dots_empty(short x, short y) {
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "     " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
	}
	static void double_dots(short x, short y) {
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "     " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 080 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 080 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 080 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 080 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     " << endl;
	}
	static void zero(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "  .d8888b.  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " d88P  Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "  \"Y8888P\"  " << std::endl;
	}

	static void one(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "   d888    " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "  d8888    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    888    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    888    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    888    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    888    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    888    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "  8888888  " << endl;
	}
	static void two(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << " .d8888b.  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88P  Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     88888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "   .d8888P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " .od888P\"  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d888P\"      " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "8888\"       " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "8888888888  " << endl;
	}
	static void three(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << " .d8888b.  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88P  Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     .d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    8888\"  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     \"Y8b. " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b  d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y8888P\"  " << endl;
	}
	static void four(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "    d8888  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "   d8P888  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "  d8P 888  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " d8P  888  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88   888  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "8888888888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "      888  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "      888  " << endl;
	}
	static void five(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "888888888  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888        " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888        " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "8888888b.  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     \"Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "       888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b  d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y8888P\"  " << endl;
	}
	static void six(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << " .d8888b.  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88P  Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888        " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888d888b.  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888P \"Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b  d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y8888P\"  " << endl;
	}

	static void seven(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
	    cout << "8888888888" << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "      d88P" << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "     d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "    d88P  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " 88888888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "  d88P    " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " d88P     " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88P      " << endl;
	}
	static void eight(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << " .d8888b.  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88P  Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b. d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y88888\"  " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << ".d8P\"\"Y8b. " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b  d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y8888P\"  " << endl;
	}
	static void nine(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << " .d8888b.  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "d88P  Y88b " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "888    888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b. d888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y888P888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "       888 " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << "Y88b  d88P " << endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		cout << " \"Y8888P\"  " << endl;
	}
	static void am_pm(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		cout << "  AM  " << endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		cout << "      " << endl;
		move_coord(x_cur, y_cur);
		cout << "      " << endl;
		move_coord(x_cur, y_cur);
		cout << " PM   " << endl;
		move_coord(x_cur, y_cur);
		cout << "      " << endl;
		move_coord(x_cur, y_cur);
		cout << "      " << endl;
	}
};

#endif 
