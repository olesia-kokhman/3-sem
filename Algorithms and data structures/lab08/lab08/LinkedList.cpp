#include "LinkedList.h"
LinkedList::LinkedList() :head(nullptr){}
void LinkedList::insert(int val) {
    Node* new_node = new Node(val);
    if (head == nullptr) {
        head = new_node;
    }
    else{
        new_node->next = head;
        head = new_node;
    }
}
int LinkedList::getCount() {
    Node* temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}
int LinkedList::searchPosition(int val) {
    Node* temp = head;
    int length = 0;
    while (temp != nullptr) {
        temp = temp->next;
        length++;
    }
    temp = head;
    while (temp != nullptr) {
        if (temp->data == val)
            return length;
        length--;
        temp = temp->next;
    }
    return INT_MIN;
}
int LinkedList::maxElement() {
    Node* temp = head;
    int max = INT_MIN;
    while (temp != nullptr) {
        if (max < temp->data)
            max = temp->data;
        temp = temp->next;
    }
    return max;
}
int LinkedList::elementAfterMax() {
    Node* temp = head;
    Node* maxNode = head;
    Node* afterMaxNode = head;
    int max = INT_MIN;
    while (temp != nullptr) {
        if (max < temp->data) {
            afterMaxNode = maxNode;
            maxNode = temp;
            max = temp->data;
        }
        temp = temp->next;
    }
    if (afterMaxNode->data == maxNode->data) {
        return INT_MIN;
    }
    return afterMaxNode != nullptr ? afterMaxNode->data : INT_MIN;
}
int LinkedList::elementBeforeMin() {
    Node* temp = head;
    Node* minNode = head;
    int min = INT_MAX;
    while (temp != nullptr) {
        if (min > temp->data) {
            minNode = temp;
            min = temp->data;
        }
        temp = temp->next;
    }
    return minNode->next != nullptr ? minNode->next->data : INT_MAX;
}
int LinkedList::minElement() {
    Node* temp = head;
    int min = INT_MAX;
    while (temp != nullptr) {
        if (min > temp->data)
            min = temp->data;

        temp = temp->next;
    }
    return min;
}
int LinkedList::thirdElementFromStart() {
    Node* temp = head;
    int length = 0;
    while (temp != nullptr) {
        temp = temp->next;
        length++;
    }
    if (length < 3)
        return INT_MIN;
    temp = head;
    for (int i = 1; i < length - 3 + 1; i++)
        temp = temp->next;
    return temp->data;
}
int LinkedList::secondElementFromEnd() {
    Node* temp = head;
    return temp->next == nullptr ? INT_MIN : temp->next->data;
}
Node* LinkedList::getHead() {
    return head;
}