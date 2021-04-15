#pragma once

template <typename E>
struct LNode
{
    E data;      
    LNode *next; 
};



template <typename E>
using LinkList = LNode<E> *; 


template <typename E>
void InitList(LinkList<E> &L)
{
    L = new LNode<E>;
    L->next = nullptr;
}


template <typename E>
void ListInsert(LinkList<E> &L, int i, E e)
{

    auto p = L;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        ++j;
    }


    if (p && j == i - 1) {
        auto s = new LNode<E>;
        s->data = e;
        s->next = p->next;
        p->next = s;
    } else {
        throw "Invalid i";
    }
}


template <typename E>
void ListDelete(LinkList<E> &L, int i, E &e)
{

    auto p = L;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        ++j;
    }

    if (p && j==i-1 && p->next) 
    {
        auto q = p->next;  
        e = q->data;
        p->next = q->next;
        delete q;
    } else {
        throw "Invalid i";
    }
}