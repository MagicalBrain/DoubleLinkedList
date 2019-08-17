#pragma once
#include <iostream>
#include <string.h>
#include "CreatFunction.h"

using namespace std;

#define ElemType int

typedef struct DLNodes
{
	ElemType data;
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
* 1.1 双链表的初试化
*/
int DLinkedListInit(DLinkedList L)
{
	cout << "?" << endl;
	return 0;
}