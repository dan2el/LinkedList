#include "LinkedList.h"

using namespace std;

int main()
{
	cout << "LinkedList" << endl;

	tLinkedList list = {};
	InitList(&list);
		
	PushBack(&list, 1);
	PushBack(&list, 2);
	PushBack(&list, 3);
	PushFront(&list, 20);
	PushFront(&list, 30);


	tNode* pNode = list.pHeadNode;
	for (int i = 0; i < list.iCount; i++) {
		cout << pNode->iData << endl;
		pNode = pNode->pNextNode;
	}

	ReleaseList(&list);
	
	return 0;
}