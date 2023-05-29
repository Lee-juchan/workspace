/* �����͸� ����� ���� ����Ʈ(���) */
#ifndef ___LinkedList
#define ___LinkedList

#include "Member/Member.h"

/*--- ��� ---*/
typedef struct __node {
	Member data;			/* ������ */
	struct __node *next;	/* ���� ������(���� ��忡 ���� ������) */
} Node;

/*--- ���� ����Ʈ ---*/
typedef struct {
	Node *head;			/* �Ӹ� ��忡 ���� ������ */
	Node *crnt;			/* ������ ��忡 ���� ������ */
} List;

/*--- ���� ����Ʈ�� �ʱ�ȭ ---*/
void Initialize(List *list);

/*--- �Լ� compare�� x�� ���� ��带 �˻� ---*/
Node *search(List *list, const Member *x, int compare(const Member *x, const Member *y));

/*--- �Ӹ��� ��带 ���� ---*/
void InsertFront(List *list, const Member *x);

/*--- ������ ��带 ���� ---*/
void InsertRear(List *list, const Member *x);

/*--- �Ӹ� ��带 ���� ---*/
void RemoveFront(List *list);

/*--- ���� ��带 ���� ---*/
void RemoveRear(List *list);

/*--- ������ ��带 ���� ---*/
void RemoveCurrent(List *list);

/*--- ��� ��带 ���� ---*/
void Clear(List *list);

/*--- ������ ����� �����͸� ��� ---*/
void PrintCurrent(const List *list);

/*--- ������ ����� �����͸� ���(�ٹٲ� ���� ����) ---*/
void PrintLnCurrent(const List *list);

/*--- ��� ����� �����͸� ����Ʈ ������� ��� ---*/
void Print(const List *list);

/*--- ���� ����Ʈ ���� ---*/
void Terminate(List *list);
#endif