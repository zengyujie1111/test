 #include "Cunit.h"
#include<iostream>
using namespace std;
Cunit::Cunit(int x, int y, char pic)
{
	m_iX = x;
	m_iY = y;
	m_Pic = pic;
}
Cunit::~Cunit()
{}
void Cunit::show()
{
	gotoxy(m_iX,m_iY);
	cout << m_Pic;
}
void Cunit::erase()
{
	gotoxy(m_iX, m_iY);
	cout << " ";
}
void Cunit::gotoxy(int x, int y)
{
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	HANDLE hConsoleOut;
	hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
	csbiInfo.dwCursorPosition.X = x;
	csbiInfo.dwCursorPosition.Y = y;
	SetConsoleCursorPosition(hConsoleOut, csbiInfo.dwCursorPosition);
}
