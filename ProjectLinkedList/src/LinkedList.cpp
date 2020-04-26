#include "LinkedList.h"

LinkedList::LinkedList()
{
    start = new LinkedListNode();

    cout << "Linked list created and initialized" << endl;
}

LinkedList::~LinkedList()
{
    cout << "Link list destroyed" << endl;
}

void LinkedList::assignStartNodeValue(int num)
{
    if (start)
    {
        start->value = num;
    }
    else
    {
        start = new LinkedListNode();
        start->value = num;
        start->next = nullptr;
    }
}

void LinkedList::appendNode(int num)
{
    LinkedListNode *it = start;
    while (it->next)
    {
        it = it->next;
    }

    LinkedListNode *node = new LinkedListNode();
    node->value = num;
    node->next = nullptr;
    it->next = node;
}

void LinkedList::deleteNode(int num)
{
    LinkedListNode *it = start;
    if (it->value == num)
    {
        start = it->next;
        delete(it);
    }  
    else
    {
        while(it)
        {
            if(it->next && it->next->value == num)
            {
                LinkedListNode *temp = it->next;
                it->next = it->next->next;
                delete(temp);
                return;
            }
            else
            {
                it = it->next;
            }
        }
        if(!it)
        {
            cout << "node having value " << num << " not resent in the list" << endl;
        }
    }
}

void LinkedList::printList()
{
    LinkedListNode *it = start;

    while(it)
    {
        cout << it->value << ", ";
        it = it->next;
    }
    if(!it)
    {
        cout << "NULL" << endl;
    }
}