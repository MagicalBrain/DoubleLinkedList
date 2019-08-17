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