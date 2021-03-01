#pragma once
#include "Cunit.h"
#include"control.h"
#include"snake.h"
class ui :
    public Cunit
{
public:
	void drawgamearea();
	void drawgameinfo();
public:
	static const int kleft;
	static const int kup;
	static const int kwidth=102;
	static const int kheight=42;
	static  int score_leftset;
	static  int level_leftset;
};

