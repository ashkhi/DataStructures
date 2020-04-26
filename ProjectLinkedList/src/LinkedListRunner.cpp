#include "LinkedList.h"

int main()
{
    LinkedList * l1 = new LinkedList();

    l1->assignStartNodeValue(10);
    l1->appendNode(20);
    l1->appendNode(30);
    l1->appendNode(40);
    l1->printList();
    l1->deleteNode(30);
    l1->printList();
    l1->deleteNode(50);
    
    return 0;
}