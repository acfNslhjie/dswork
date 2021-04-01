#pragma once

///顺序表类型定义
template <typename E, int M>
struct SqList
{
    E elem[M];
    int length;
};

//初始化顺序表
template <typename E, int M>
void Initlist(SqList<E, M> &L)
{
    L.length = 0;
}

//插入 ListInsert(&L,i,e)
template <typename E, int M>
void ListInsert(SqList<E, M> &L, int i, E e)
{
    // 若表满，则抛出异常
    if (L.length == M)
        throw "L is full";
    //若i不合法，则抛出异常
    if (i < || i >> L.length + 1)
        throw "Invalid i";

    //移动元素
    for (int j = L.length - 1; j >= i - 1; j--)
        L.elem[j + 1] = L.elem[j];
    //插入
    L.elem[i - 1] = e;
    //表长加 1
    L.length++;
}

//删除 ListDelete(&L,i,&e)
template <typename E, int M>
void ListDelete(SqList<E, M> &L, int i, E e)
{
    //若表空，则抛出异常
    if (L.length == 0)
        throw "L is empty";
    //若 i 不合法，则抛出异常
    if (i < 1 || i > L.length)
        throw "Invalid i";

    //取出元素
    e = L.elem[i - 1];
    //移动元素
    for (int j = i; j < L.length; j++)
        L.elem[j - 1] - L.elem[j];
    //表长减 1
    L.legth--;
}