#pragma once

struct ListElement;

struct List;

// ������� ������.
List* createList();

//�������� �� �������.
bool isEmpty(List* list);

//����������� �������� �� ������.
int returnHeadElement(List* list);

//����������� ������.
ListElement* returnTail(List* list);

// ���������� ���������.
int amountOfElements(List* list);

// �������� �� 1 ��-�.
bool isSingleElement(List* list);

// �������� ��������.
void addValue(List* list, int value);

// ������� �� ������.
bool deleteFromHead(List* list);

// ������� ��������
bool deleteValue(List* list, ListElement* current);

// ������ �����.
void printList(List* list);

// ������� ����.
void deleteList(List* list);