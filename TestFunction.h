#pragma once
#include <iostream>
#include "DoubleLinkList.h"
#include "func.h"

using namespace std;

int test_output()
{
	DLinkedList L;
	CircleDLinkedListInit(L);

	CircleDLinkedInput(L);

	CircleDLinkedOutput(L);
	CircleDLinkedOutputLeft(L);
	cout << L->left->data << endl;
	return 0;
}

int test_mirrorcreat()
{
	CreatMirrorRand();
	return 0;
}

int test_func17()
{
	DLinkedList L1,L2;

	for (int i = 0; i < 5; i++)
	{
		CircleDLinkedListInit(L1);

		CircleDLinkedInputMirror(L1);

		CircleDLinkedOutput(L1);

		CircleDLinkedListInit(L2);


		CircleDLinkedInput(L2);


		CircleDLinkedOutput(L2);

		cout << "test" << i + 1 << endl;
		func17(L1);
		func17(L2);

		L1 = NULL;
		L2 = NULL;
	}
	cout << "test over!" << endl;
	
	return 0;
}

//20

/*
* 20 双链表的freq输出函数
*/
int DLinkedFreqOutput(DLinkedList L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	if (L->right != NULL)
	{
		DLinkedList p = L->right;
		while (p->right!=NULL)
		{
			cout << p->freq << " ,";
			p = p->right;
		}
		cout << endl;
		return 1;
	}
	cout << "输出失败，表为空!" << endl;
	return 0;
}


int test_func20()
{
	DLinkedList L;
	int n[3];

	DLinkedListInit(L);

	DLinkedInput(L);

	DLinkedOutput(L);

	

	
	cout << "输入键值：" << endl;
	cin >> n[0];
	Locate(L, n[0]);

	cout << "输入键值：" << endl;
	cin >> n[0];
	Locate(L, n[0]);
	
	cout << "输入键值：" << endl;
	cin >> n[0];
	Locate(L, n[0]);
	
	DLinkedFreqOutput(L);
	return 0;
}