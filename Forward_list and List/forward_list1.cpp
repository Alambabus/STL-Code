#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    //Declaration of forward_list
    forward_list<int>l;

    //assign() Function
    //T.C.=O(1) or O(m)
    l.assign({10,20,30,10});

    //remove() Function
    //T.C.=O(n)
    l.remove(10);

    for(auto it=l.begin();it!=l.end();it++)cout<<*it<<"->";cout<<"NULL";
    return 0;
}

