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
	
	if (L->right != L)
	{
		p1 = L->right;
		p2 = L->left;

		while (p1->data == p2->data && p1 != L)
		{
			p1 = p1->right;
			p2 = p2->left;
		}
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


/*
* 20
* 非循环双链表
* 添加一个数据域：频度域（freq）
*/
DLinkedList Locate(DLinkedList L, int x)
{
	DLNodes *p,*q;
	if (L->right == NULL)
		return NULL;

	p = L->right;
	q = L;

	//寻找元素x
	while (p)
	{
		if (p->data == x)
		{
			p->freq++;
			break;
		}
		p = p->right;
	}

	//根据freq值来排序
	p->right->left = p->left;
	p->left->right = p->right;

	p->right = q->right;
	q->right->left = p;
	p->left = q;
	q->right = p;
	return p;
}


