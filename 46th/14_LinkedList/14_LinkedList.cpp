#include <iostream>
#include "yaList.h"


int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    //_CrtSetBreakAlloc(187);
    Node n1;
    Node n2;
    Node n3;

    n1.data = 3;
    n1.next = &n2;

    n2.data = 4;
    n2.next = &n3;

    n3.data = 5;
    n3.next = nullptr;

    std::cout << n1.data;
    std::cout << n1.next->data;

    AddNode(1);
    AddNode(2);
    AddNode(3);
    AddNode(4);

    DeleteNode(2);
    
    ReleaseNodes();


    return 0;
}

