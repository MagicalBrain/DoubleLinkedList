#pragma once
#include <iostream>
#include "DoubleLinkList.h"

using namespace std;

int func17(DLNodes* L)
/*
* �жϸ�ѭ��˫�����Ƿ�Գ�
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
			cout << "�ǶԳƵģ�" << endl;
		}
		else
			cout << "���ǶԳƵģ�" << endl;
		return 1;
	}
	return 0;
}


/*
* 20
* ��ѭ��˫����
* ���һ��������Ƶ����freq��
*/
DLinkedList Locate(DLinkedList L, int x)
{
	DLNodes *p,*q;
	if (L->right == NULL)
		return NULL;

	p = L->right;
	q = L;

	//Ѱ��Ԫ��x
	while (p)
	{
		if (p->data == x)
		{
			p->freq++;
			break;
		}
		p = p->right;
	}

	//����freqֵ������
	p->right->left = p->left;
	p->left->right = p->right;

	p->right = q->right;
	q->right->left = p;
	p->left = q;
	q->right = p;
	return p;
}


