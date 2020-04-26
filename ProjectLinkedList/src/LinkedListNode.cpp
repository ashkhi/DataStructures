#include "LinkedListNode.h"

LinkedListNode::LinkedListNode()
{
    value = 0;
    next = nullptr;

    cout << "Linked list node created and initilized" << endl;
}

LinkedListNode::~LinkedListNode()
{
    cout << "Linked list node destroyed" << endl;
}