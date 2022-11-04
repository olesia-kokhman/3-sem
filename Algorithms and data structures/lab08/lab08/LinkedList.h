#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val = 0) :data(val), next(nullptr) {}
    Node(int val, Node* tempNext) :data(val), next(tempNext) {}
};
class LinkedList{ 
    Node* head;
public:
    LinkedList();
    void insert(int val);
    int searchPosition(int val);
    int getCount();
    int maxElement();
    int minElement();
    int thirdElementFromStart();
    int secondElementFromEnd();
    int elementBeforeMin();
    int elementAfterMax();
    Node* getHead();
};
#endif
