﻿// LinkedList.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "LinkedList.h"


void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

void PushBack(tLinkedList* _pList, int _iData)
{
	//	데이터를 저장할 노드 생성
	//	데이터 복사
	tNode* pNode = (tNode*)malloc(sizeof(tNode));
	pNode->iData = _iData;
	pNode->pNextNode = nullptr;

	//	추가한 데이터가 처음인지 아닌지
	if (_pList->iCount == 0) {
		_pList->pHeadNode = pNode;
	}
	else {
		//	현재 가장 마지막 노드를 찾아서,
		//	해당 노드의 pNext 를 생성시킨 노드의 주소로 채움

		tNode* pCurruntFinalNode = _pList->pHeadNode;
		while (true) {
			if (pCurruntFinalNode->pNextNode == nullptr) {
				break;
			}
		}
	}
}
