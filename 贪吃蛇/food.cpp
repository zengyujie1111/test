#include "food.h"
food:: food()
{}
food::~food()
{}
void food::CreatePos()
{
	srand((int)time(0));
	m_iX = 10+rand() % 70;
	m_iY = 11+rand() % 31;
}
