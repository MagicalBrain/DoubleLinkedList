#pragma once
#include <iostream>
#include <string.h>
#include "CreatFunction.h"

using namespace std;

#define ElemType int

typedef struct DLNodes
{
	ElemType data;
	ElemType freq;	//ֻ��func20���õ���������������������Ŀ��û���õ���
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
* 1.1 ˫����ĳ�ʼ��
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
* 1.2  ѭ��˫����ĳ�ʼ��
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
* 2.1 ˫������������
*/
int DLinkedOutput(DLinkedList L) {
	/*����:
	tou:
	1:��ʼ���ɴ�ͷ����
	0��~����ͷ�ڵ��
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
	cout << "���ʧ�ܣ���Ϊ��!" << endl;
	return 0;
}

/*
* 2.2 ѭ��˫������������
*/
int CircleDLinkedOutput(DLinkedList L) {
	/*����:
	tou:
	1:��ʼ���ɴ�ͷ����
	0��~����ͷ�ڵ��
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
	cout << "���ʧ�ܣ���Ϊ��!" << endl;
	return 0;
}


/*
* 2.2 ѭ��˫������������
*/
int CircleDLinkedOutputLeft(DLinkedList L) {
	/*����:
	tou:
	1:��ʼ���ɴ�ͷ����
	0��~����ͷ�ڵ��
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
	cout << "���ʧ�ܣ���Ϊ��!" << endl;
	return 0;
}


/*
* ˫��������뺯��
*/
void DLinkedInput(DLinkedList& L) {
	/*����:
	tou:
	1:��ʼ���ɴ�ͷ����
	0��~����ͷ�ڵ��
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
* ѭ��˫��������뺯��
*/
void CircleDLinkedInput(DLinkedList& L) {
	/*����:
	tou:
	1:��ʼ���ɴ�ͷ����
	0��~����ͷ�ڵ��
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
* �ԳƵ�ѭ��˫��������뺯��
*/
void CircleDLinkedInputMirror(DLinkedList& L) {
	/*����:
	tou:
	1:��ʼ���ɴ�ͷ����
	0��~����ͷ�ڵ��
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


