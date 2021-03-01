// 贪吃蛇.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include"Cunit.h"
#include "food.h"
#include<windows.h>
#include "ui.h"
#include "snake.h"
#include "control.h"
#include <conio.h>
#include<vector>
#include <iostream>
using namespace std;
int main()
{

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(hOut, &cci);
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hOut, &cci);
    //vector<int>v;
    //v.push_back(1);
    //v.push_back(2);
    //v.push_back(3);
    //v.push_back(4);
    ////for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    ////    cout << "it" << endl;
    ////}

    //for (int i=0;i<v.size(); i++) {
    //    cout << v[i] << endl;
    //}
     /* for (size_t i = 0; i < 4; i++)
    {
        cout << a.m_body[i].m_iX << "  " << a.m_body[i].m_iY << endl;


    }*/
    //food s;
    //s.CreatePos();
    //s.show();    
    //Sleep(500);
    //snake a;
    //control m;
    //while (true)
    //{  

    //    m.run();
    //    a.showsnake();
    //    a.move();
    //    Sleep(300);
    //    a.erasesnake();
    //}
    control a;   
    a.run();


    //背景音乐
    

    //设置光标
   /* setCursur();*/

    //画界面
    //ui u;
    //u.drawgameArea();

    ////画游戏信息
    //u.drawGameInfo();

    ////画食物

    //Sleep(5000);
    //a.erase();
   
    //return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
