#include "sqlist.h"

using namespace std;

//测试顺序表
int main()
{
    SqList<int, 10> L;
    InitList(L);
    listInsert(L,1,10);
    listInsert(L,1,20);
    listInsert(L,1,30);
    listInsert(L,1,40);
    listInsert(L,1,50);

    int x;
    ListDelete(L, 3, x);

    for (int i =0; i < L.length; i++)
    {
        cout << L.elem[i] << endl;

        return 0;
    }
}