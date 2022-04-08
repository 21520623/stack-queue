// Queue and stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct NODE {
	int data;
	NODE* pNext;
};
//Khai bao stack chi can pHead
struct stack {
	NODE* pHead;
};
//tao stack rong
void create_stack(stack& s) {
	s.pHead = NULL;
}
//kiem tra stack rong
bool IsEmpty(stack s) {
	return (s.pHead == NULL);
}
//day phan tu vao stack
void push(stack& s, int n) {
	//tao NODE chua phan tu roi day vao stack
	NODE* p = new NODE();
	p->data = n;
	p->pNext = NULL;
	if (IsEmpty(s)) {
		s.pHead = p;
	}
	else {
		p->pNext = s.pHead;
		s.pHead = p;
	}
}
//lay phan tu dau va xoa no di
bool pop(stack& s, int& n) {
	if (IsEmpty(s)) {
		return false;
	}
	NODE* p = s.pHead;
	n = p->data;
	s.pHead = s.pHead->pNext;
	delete p;
	p = NULL;
	return true;
}
int main()
{

}
