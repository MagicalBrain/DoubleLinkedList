#pragma once
#include <iostream>
#include <string.h>
#include "CreatFunction.h"

using namespace std;

#define ElemType int

typedef struct DLNodes
{
	ElemType data;
	ElemType freq;	//只有func20中用到该数据域，其他函数（题目）没有用到。
	struct DLNodes* left, * right;
} DLNodes, * DLinkedList;

typedef struct XorNode
{
	char data;
	struct XorNode* LRPtr;
}XorNode, * XorPointer;

//异或双链表的数据类型定义：
typedef struct
{
	XorNode* Left, Right;
} XorLinkedList;

/*
* 指针异或函数
* 返回指针p和q的异或值
*/
XorPointer XorP(XorPointer p, XorPointer q)
{
	if (p == q)
		return q;
	else
		return p;
}

//基本操作：
/*
* 1.1 双链表的初始化
*/
int DLinkedListInit(DLinkedList& L)
{
	L = (DLinkedList)malloc(sizeof(DLNodes));

	if (L == NULL)
		return 0;

	L->right = NULL;
	L->left = NULL;
	//L->freq = 0;

	return 1;
}

/*
* 1.2  循环双链表的初始化
*/
int CircleDLinkedListInit(DLinkedList& L)
{
	L = (DLinkedList)malloc(sizeof(DLNodes));

	if (L == NULL)
		return 0;

	L->right = L;
	L->left = L;

	return 1;
}


/*
* 2.1 双链表的输出函数
*/
int DLinkedOutput(DLinkedList L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	if (L->right != NULL)
	{
		DLinkedList p = L->right;
		while (p)
		{
			cout << p->data << " ,";
			p = p->right;
		}
		cout << endl;
		return 1;
	}
	cout << "输出失败，表为空!" << endl;
	return 0;
}

/*
* 2.2 循环双链表的输出函数
*/
int CircleDLinkedOutput(DLinkedList L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	if (L->right != L)
	{
		DLinkedList p = L->right;
		while (p != L)
		{
			cout << p->data << " ,";
			p = p->right;
		}
		cout << endl;
		return 1;
	}
	cout << "输出失败，表为空!" << endl;
	return 0;
}


/*
* 2.2 循环双链表的输出函数
*/
int CircleDLinkedOutputLeft(DLinkedList L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	if (L->left != L)
	{
		DLinkedList p = L->left;
		while (p != L)
		{
			cout << p->data << " ,";
			p = p->left;
		}
		cout << endl;
		return 1;
	}
	cout << "输出失败，表为空!" << endl;
	return 0;
}


/*
* 双链表的输入函数
*/
void DLinkedInput(DLinkedList& L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	int* a;
	a = CreatRand(0);
	int length = a[0];
	DLinkedList q = L;



	for (int i = length; i > 0; --i)
	{
		DLNodes* p = (DLinkedList)malloc(sizeof(DLNodes));
		p->freq = 0;
		p->data = a[i];
		if (i == length)
		{
			p->right = q->right;
			q->right = p;
			q->right->left = p;
			p->left = q;
			
		}
		else
		{
			p->right = q->right;
			q->right->left = p;
			p->left = q;
			q->right = p;
		}
	}
}


/*
* 循环双链表的输入函数
*/
void CircleDLinkedInput(DLinkedList& L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	int* a;
	a = CreatRand(0);
	int length = a[0];
	DLinkedList q = L;
	DLNodes* p;

	for (int i = length; i > 0; --i)
	{
		p = (DLinkedList)malloc(sizeof(DLNodes));
		p->data = a[i];
		p->right = q->right;
		q->right->left = p;
		p->left = q;
		q->right = p;

		/*
		if (i == length)
			L->left = p;
		*/
	}	
}


/*
* 对称的循环双链表的输入函数
*/
void CircleDLinkedInputMirror(DLinkedList& L) {
	/*参数:
	tou:
	1:初始化成带头结点的
	0：~不带头节点的
	*/
	int* a;
	a = CreatMirrorRand();
	int length = a[0];
	DLinkedList q = L;
	DLNodes* p;

	for (int i = length; i > 0; --i)
	{
		p = (DLinkedList)malloc(sizeof(DLNodes));
		p->data = a[i];
		p->right = q->right;
		q->right->left = p;
		p->left = q;
		q->right = p;
	}

}


