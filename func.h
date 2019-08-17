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
	int num = 0;

	if (L->right != L)
	{
		p1 = L->right;
		p2 = L->left;

		while (p1->data == p2->data && p1 != L)
		{
			p1 = p1->right;

			p2 = p2->left;

			num++;
		}
		cout << num << endl;
		if (p1 == L)
		{
			cout << "是对称的！" << endl;
		}
		else
			cout << "不是对称的！" << endl;

		return 1;
	}

	return 0;
}