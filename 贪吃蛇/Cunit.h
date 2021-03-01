#pragma once
#include<Windows.h>

#include<iostream>
using namespace std;
class Cunit
{
public:
	Cunit(int x = 0, int y = 0, char pic = 'O');
	virtual ~Cunit();
	void show();
	void erase();
	static void  gotoxy(int x, int y);
public:
	int m_iX;
	int m_iY;
	char m_Pic;

};
