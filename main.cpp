#include <iostream>
#include "DoubleLinkList.h"

using namespace std;

int main()
{
	DLinkedList L;
	L = (DLinkedList)malloc(sizeof(DLNodes));
	DLinkedListInit(L);
	return 0;
}