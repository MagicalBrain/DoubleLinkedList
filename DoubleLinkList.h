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

//���˫������������Ͷ��壺
typedef struct
{
	XorNode* Left, Right;
} XorLinkedList;

/*
* ָ�������
* ����ָ��p��q�����ֵ
*/
XorPointer XorP(XorPointer p, XorPointer q)
{
	if (p == q)
		return q;
	else
		return p;
}

//����������
/*
* 1.1 ˫����ĳ��Ի�
*/
int DLinkedListInit(DLinkedList L)
{
	cout << "?" << endl;
	return 0;
}