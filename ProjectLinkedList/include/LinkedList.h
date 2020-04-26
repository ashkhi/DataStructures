#pragma once
#include <iostream>
#include "LinkedListNode.h"

using namespace std;

class LinkedList
{
    private:
        LinkedListNode *start;

    public:
        LinkedList();
        ~LinkedList();

        void assignStartNodeValue(int);
        void appendNode(int);
        void deleteNode(int);
        void printList();
};