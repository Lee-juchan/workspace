/* �����͸� ����� ���� ����Ʈ(�ҽ�) */
#include <stdio.h>
#include <stdlib.h>

#include "Member/Member.h"
#include "LinkedList.h"

/*--- ��带 �������� ���� ---*/
static Node *AllocNode(void)
{
	return calloc(1, sizeof(Node));
}

/*--- n�� ����Ű�� ����� �� ����� ���� ���� ----*/
static void SetNode(Node *n, const Member *x, const Node *next)
{
	n->data = *x;		/* ������ */
	n->next = next;		/* ���� ������ */
}
/*--- ���� ����Ʈ�� �ʱ�ȭ ---*/
void Initialize(List *list)
{
	list->head = NULL;	/* �Ӹ� ��� */
	list->crnt = NULL;	/* ������ ��� */
}

/*--- �Լ� compare�� ����� x�� �˻��մϴ�. ---*/
Node *search(List *list, const Member *x, int compare(const Member *x, const Member *y))
{
	Node *ptr = list->head;
	while (ptr != NULL) {
			if (compare(&ptr->data, x) == 0) {	/* Ű���� ���� ��� */
					list->crnt = ptr;
				return ptr;			/* �˻� ���� */
			}
		ptr = ptr->next;			/* ���� ��带 ���� */
	}
	return NULL;					/* �˻� ���� */
}

/*--- �Ӹ��� ��带 �����ϴ� �Լ� ---*/
void InsertFront(List *list, const Member *x)
{
	Node *ptr = list->head;
	list->head = list->crnt = AllocNode();
	SetNode(list->head, x, ptr);
}

/*--- ������ ��带 �����ϴ� �Լ� ---*/
void InsertRear(List *list, const Member *x)
{
	if (list->head == NULL)		/* ����ִ� ��� */
		InsertFront(list, x);	/* �Ӹ��� ���� */
	else {
		Node *ptr = list->head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = list->crnt = AllocNode();
		SetNode(ptr->next, x, NULL);
	}
}

/*--- �Ӹ���带 �����ϴ� �Լ� ---*/
void RemoveFront(List *list)
{
	if (list->head != NULL) {
		Node *ptr = list->head->next;		/* �� ��° ��忡 ���� ������ */
		free(list->head);					/* �Ӹ� ��带 ���� */
		list->head = list->crnt = ptr;		/* ���ο� �Ӹ� ��� */
	}
}

/*--- ���� ��带 �����ϴ� �Լ� ---*/
void RemoveRear(List *list)
{
	if (list->head != NULL) {
		if ((list->head)->next == NULL)	/* ��尡 �ϳ��� �ִ� ��� */
			RemoveFront(list);			/* �Ӹ� ��带 ���� */
		else {
			Node *ptr = list->head;
			Node *pre = NULL;
			while (ptr->next != NULL) {
				pre = ptr;
				ptr = ptr->next;
			}
			
			pre->next = NULL;	/* pre�� ���� ������ �� ��° ��� */
			free(ptr);			/* ptr�� ���� ��� */
			list->crnt = pre;
		}
	}
}

/*--- ������ ��带 �����ϴ� �Լ� ---*/
void RemoveCurrent(List *list)
{
	if (list->head != NULL) {
		if (list->crnt == list->head)	/* �Ӹ� ��带 ������ ���¶�� */
			RemoveFront(list);			/* �Ӹ� ��带 ���� */
		else {
			Node *ptr = list->head;
			while (ptr->next != list->crnt)
				ptr = ptr->next;
			ptr->next = list->crnt->next;
			free(list->crnt);
			list->crnt = ptr;
		}
	}
}

/*--- ��� ��带 ���� ---*/
void Clear(List *list)
{
	while (list->head != NULL)		/* �� �� ������ */
		RemoveFront(list);			/* �Ӹ� ��带 ���� */
	list->crnt = NULL;
}

/*--- ������ ����� �����͸� ��� ---*/
void PrintCurrent(const List *list)
{
	if (list->crnt == NULL)
		printf("������ ��尡 �����ϴ�.");
	else
		PrintMember(&list->crnt->data);
}
/*--- ������ ����� �����͸� ���(�ٹٲ� ���� ����) ---*/
void PrintLnCurrent(const List *list)
{
	PrintCurrent(list);
	putchar('\n');
}

/*--- ��� ����� �����͸� ������� ����ϴ� �Լ� ---*/
void Print(const List *list)
{
	if (list->head == NULL)
		puts("��尡 �����ϴ�.");
	else {
		Node *ptr = list->head;
		puts("�� ��� ���� ��");
		while (ptr != NULL) {
			PrintLnMember(&ptr->data);
			ptr = ptr->next;		/* ���� ��� ���� */
		}
	}
}
/*--- ���� ����Ʈ�� �����ϴ� �Լ� ---*/
void Terminate(List *list)
{
	Clear(list);		/* ��� ��带 ���� */
}