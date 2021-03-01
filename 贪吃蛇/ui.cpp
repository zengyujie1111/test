#include "ui.h"
static const int kwidth;
static const int kheight;
//int i, j;
void ui::drawgamearea()
{
	for(int i=10;i<=kheight;i++)
		for (int j = 9; j <= kwidth; j++)
		{
			gotoxy(j, i);
			if (i == 10 || i == 42)
				cout << "*";
			else if (j == 9 || j ==80||j==102 )
				cout << "|";
		}
}
void ui::drawgameinfo()
{
	
	gotoxy(82, 14);
	cout << "贪吃蛇";
	gotoxy(82, 16);
	cout<<"作者：曾玉杰";
	gotoxy(82, 18);
	cout << "w a s d";
	gotoxy(82, 20);
	cout << "控制上下左右";
	gotoxy(82, 22);
	cout << "难度升级，速度将加快";
	gotoxy(82, 23);
	cout << "'#'将额外获得2分";
	gotoxy(85,30);
	cout << "score:"<<score_leftset;

	gotoxy(85, 35);
	cout << "level:"<<level_leftset;
	

	for (int i = 81; i <= 101; i++)
	{
		gotoxy(i, 26);
		cout << "-";
	}
}
int ui::score_leftset = 0;
int ui::level_leftset = 1;