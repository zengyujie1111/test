#include "snake.h"
#include<iostream>
using namespace std;

snake::snake(int x, int y, int length, Directions direction , int speed ,char pic)
{
	 m_ilength = length;
	 m_iheadx = x;
	 m_iheady = y;
	 m_speed = speed;
	 m_ipic = pic;
	 sFood = new food;

	//Cunit myunit(m_iheadx, m_iheady, '*');
	//m_body.push_back(myunit);	
	//Cunit myunit(m_iheadx-1, m_iheady, '*');
	//m_body.push_back(myunit);
	int i;
	for (i = 0; i < m_ilength; i++)
	{
		Cunit myunit;
		if (i == 0)
		{
			myunit.m_iX = m_iheadx;
			myunit.m_iY = m_iheady;
			m_body.push_back(myunit);
		}
		else
		{
			myunit.m_iX = m_iheadx-i;
			myunit.m_iY = m_iheady;
			m_body.push_back(myunit);
		}
		/*m_body.push_back(myunit);*/
		
	}
	
}
snake::~snake()
{

}

void snake::changeDirections(int value)
{

}
void snake::move()
{
	showsnake();
	Sleep(m_speed);
	erasesnake();
//
//	//接收用户按键输入 asdw  _kbhit()不阻塞判断用户输入 _getch()接受用户输入
	
	if (_kbhit())  //有输入 返回真 
	{
		key = _getch();

	}

	switch (key)
	{
	case'w':
		if (m_direction != DOWN)
		{
			kx = 0; ky = -1;
			m_direction = UP;
		}
		 break;
	case'a':
		if (m_direction !=RIGHT)
		{
			kx = -1; ky = 0;
			m_direction = LEFT;
		}
		 break;
	case's':
		if (m_direction != UP)
		{
			kx = 0; ky = 1;
			m_direction = DOWN ;
		}
          break;
	case'd':
		if (m_direction != LEFT)
		{
			kx = 1; ky = 0;
			m_direction = RIGHT;
		} 
           break;

	default:
		break;
	}

	//记录蛇尾坐标
	lastX = m_body[m_ilength - 1].m_iX;
	lastY = m_body[m_ilength - 1].m_iY;

	//蛇移动 前一节身体给后一节身体赋值
	for (size_t i = m_ilength - 1; i > 0; i--)
	{
		m_body[i].m_iX = m_body[i - 1].m_iX;
		m_body[i].m_iY = m_body[i - 1].m_iY;
	}

	//蛇头移动 坐标
	m_body[0].m_iX += kx;
	m_body[0].m_iY += ky;

}
bool snake::eatfood(food* pfood)
{
	if (pfood->m_iX == m_body[0].m_iX && pfood->m_iY == m_body[0].m_iY)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void snake::growup()
{
	
		Cunit c;
		c.m_iX = lastX;
		c.m_iY = lastY;
		m_body.push_back(c);
		m_ilength++;
	
}
void snake::erasesnake()
{
	Cunit::gotoxy(lastX,lastY);
	cout << ' ';

}
void snake::showsnake()
{


	for (int i = 0; i < m_ilength; i++)
	{
		if (i == 0)
		{
			Cunit::gotoxy(m_body[i].m_iX, m_body[i].m_iY);
			putchar('@');
		}
		else
		{
			Cunit::gotoxy(m_body[i].m_iX, m_body[i].m_iY);
			putchar('o');
		}
		
	}
		
	
}