#pragma once
#include <iostream>
#include "DoubleLinkList.h"

using namespace std;

int func17(DLNodes* L)
/*
* 判断该循环双链表是否对称
*/
{
	DLNodes* p1, * p2;

	if (L->next != L)
	{
		p1 = L->next;
		p2 = L->next;

		while (true)
		{

		}
	}

	return 0;
}