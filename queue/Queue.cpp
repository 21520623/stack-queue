// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct NODE {
    int data;
    NODE* pNext;
};
//Tao queue
struct QUEUE {
    NODE* pHead;
    NODE* pTail;
};
//Tao Queue rong
void createQUEUE(QUEUE& q) {
    q.pHead = q.pTail = NULL;
}
//kiem tra rong
bool IsEmpty(QUEUE q) {
    return (q.pHead == NULL);
}
//xoa phan tu dau tien 
bool deQueue(QUEUE& q, int& n) {
    if (IsEmpty(q)) return false;
    NODE* p = q.pHead;
    n = p->data;
    q.pHead = p->pNext;
    delete p;
    return true;
}
//them phan tu vao cuoi
void enQueue(QUEUE& q, int x) {
    NODE* mid = new NODE;
    mid->data = x;
    mid->pNext = NULL;
    AddTail(q, mid);
}
//ham addtail <=> addtail cua list
void AddTail(QUEUE& q, NODE* m) {
    if (q.pHead == NULL) {
        q.pHead = q.pTail = m;
    }
    else {
        q.pTail->pNext = m;
        q.pTail = m;
    }
}
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
