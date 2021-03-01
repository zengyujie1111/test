#pragma once

#include <Windows.h>
#include "food.h"
#include"Cunit.h"
#include<conio.h>
#include "ui.h"
#include "snake.h"
class snake;
class control
{
public:

	COORD m_coor;
public:
		control();
		~control();
		void drawGameArea();
		void drawGameInfo();
		void run();
		bool checkfailed();
		bool checklevel();
		void changeinfo();
public:
	snake* m_psnake;
	food* m_pfood;

};

