// Theater Ticket Management System.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	if (Account_Perst_CheckAccFile() == 1)
	{
		SysLogin();
	}
	else
	{
		Account_UI_InitSys();
	}
    return 0;
}
