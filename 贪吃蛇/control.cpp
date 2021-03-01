#include "control.h"




control::control()
{
	m_pfood = new food;
	m_psnake = new snake;
}
control::~control()
{
	delete m_pfood;
	m_pfood=NULL;
	//todo
}

void control::run()
{
	m_pfood->CreatePos();
	m_pfood->show();
	drawGameArea();
	drawGameInfo();
	while (checkfailed())
	{
	   m_psnake->showsnake();
       m_psnake->move();

	   m_psnake->erasesnake();
	   checklevel();

	
	  if (m_psnake->eatfood(m_pfood))
	    {
		  changeinfo();
		  drawGameInfo();
		  if (m_pfood->m_Pic == '#')
		  {
			  m_psnake->growup();
			  //m_psnake->growup();
			  //m_psnake->growup();
		  }
		  else
		  {
			  m_psnake->growup();
		  }
		  m_pfood->erase();
		  if ((m_psnake->m_ilength - 4) %5==4)
		  {
			  m_pfood->m_Pic = '#';
			  m_pfood->CreatePos();
			  m_pfood->show();
		  }
		  else
		  {
			  m_pfood->m_Pic = 'O';
			m_pfood->CreatePos();
			m_pfood->show();

		  }
	    }
    }
	Cunit::gotoxy(20,45);
	cout<< "ÓÎÏ·½áÊø";
	return;
}

void control::drawGameArea()
{
	ui u;
	u.drawgamearea();
}
void control::drawGameInfo()
{
	ui u;
	u.drawgameinfo();
}

bool control::checkfailed()
{
	for (int i = 1; i < m_psnake->m_ilength; i++)
	{
		if (m_psnake->m_body[0].m_iX == m_psnake->m_body[i].m_iX&& m_psnake->m_body[0].m_iY == m_psnake->m_body[i].m_iY)
		{
			return 0;
		}
		else
	    {
			if(m_psnake->m_body[0].m_iX == 9 || m_psnake->m_body[0].m_iX == 80 || m_psnake->m_body[0].m_iY == 10 || m_psnake->m_body[0].m_iY == 42)
		    return 0;
	    }	
	}
	return 1;
	
}

bool control::checklevel()
{
	int i = 1;
	
	if ((m_psnake->m_ilength-3) >= i * 10)
	{
		return 1;
	}
	else return 0;
}
void control::changeinfo()
{
	
	int i = 1;
	if (m_pfood->m_Pic == 'O')
	{
		ui::score_leftset++;
	}
	else
	{
		ui::score_leftset += 3;
	}
	
	if(checklevel())
	{
		i = i + 1;
		m_psnake->m_speed -= 30;

	}
	ui::level_leftset = i;
}
