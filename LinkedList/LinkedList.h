// LinkedList.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.

#pragma once

#include <iostream>

// TODO: 여기서 프로그램에 필요한 추가 헤더를 참조합니다.

typedef struct _tagNode			//	노드 : 데이터를 저장하는 기본 단위
{
	int					iData;		//	해당 노드의 데이터를 저장.
	struct _tagNode*	pNextNode;	//	다음 노드의 주소값을 저장.
}tNode;

typedef struct _tagList
{
	tNode*	pHeadNode;	//	가장 첫 번째 노드의 주소값을 저장.
	int		iCount;		//	리스트에 들어간 데이터 개수를 저장.
	//int	iMaxCount;	//	링크드리스트에는 최대값의 개념이 없음
}tLinkedList;

//	연결형 리스트 초기화
void InitList(tLinkedList* _pList);

//	연결형 리스트 데이터 추가
void PushBack(tLinkedList* _pList, int _iData);
void PushFront(tLinkedList* _pList, int _iData);

void ReleaseList(tLinkedList* _pList);