#pragma once
#include"food.h"
#include "Cunit.h"
#include<vector>
#include<conio.h>
#include "control.h"

typedef enum
{
	UP,DOWN, LEFT, RIGHT
}Directions;

class snake
{
public:
	snake(int x = 50, int y = 20, int length = 4, Directions direction = LEFT, int speed = 150, char pic = '$');
	~snake();

	void changeDirections(int value);//wasd
	void move();
	bool eatfood(food *pfood);
	void showsnake();
	void erasesnake();
	void growup();

public:
	int m_ilength=4;
	int m_iheadx;
	int m_iheady;
	int m_speed;
	int m_ipic;
	char key = 'd';
	int kx, ky, lastX, lastY;
	Directions m_direction;
	vector<Cunit>m_body;
	food* sFood = NULL;




};

