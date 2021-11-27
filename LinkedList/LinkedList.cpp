// LinkedList.cpp : 애플리케이션의 진입점을 정의합니다.
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
		while (pCurruntFinalNode->pNextNode) {
			pCurruntFinalNode = pCurruntFinalNode->pNextNode;
		}
		pCurruntFinalNode->pNextNode = pNode;
	}
	++_pList->iCount;
}

void PushFront(tLinkedList* _pList, int _iData)
{
	//	새로 생성시킨 노드의 다음을 기존의 헤드로 지정한다.
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->iData = _iData;
	pNewNode->pNextNode = _pList->pHeadNode;
	
	//	리스트의 헤드노드 포인터를 갱신한다.
	_pList->pHeadNode = pNewNode;

	//	데이터 카운트 증가
	++_pList->iCount;
}
//	재귀함수 사용 방법
void Release(tNode* _pNode) {
	if (_pNode == nullptr)
		return;
	Release(_pNode->pNextNode);
	free(_pNode);
}

void ReleaseList(tLinkedList* _pList)
{
	//Release(_pList->pHeadNode); // 재귀함수 사용방법
	
	//반복문 사용방법
	tNode* pDeleteNode = _pList->pHeadNode;

	while (pDeleteNode) {
		tNode* pNext = pDeleteNode->pNextNode;
		free(pDeleteNode);
		pDeleteNode = pNext;
	}
}

