#include <iostream>

#include "linklist.h"

int main()
{

    LinkList<int> L;
    InitList(L);
    ListInsert(L, 1, 100);
    ListInsert(L, 1, 200);
    ListInsert(L, 1, 300);
    ListInsert(L, 1, 400);
    ListInsert(L, 1, 500);
    ListInsert(L, 1, 600);
    ListInsert(L, 1, 700);

    int e;
    ListDelete(L, 3, e);

    auto p = L->next;
    while (p)
    {
        std::cout << p->data << std::endl;
        p = p->next;
    }

    return 0;
}