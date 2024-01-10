#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
//1->
    //Declaration of forward_list
    forward_list<int>l;

    //assign() Function
    //T.C.=O(1) or O(m)
    l.assign({10,20,30,10});

    forward_list<int>l1;
    l1.assign(l.begin(),l.end());

    for(auto it=l1.begin();it!=l1.end();it++)cout<<*it<<"->";cout<<"NULL"<<endl;
//2->
    forward_list<int>l2;
    l2.assign(5,10);
    for(auto it=l2.begin();it!=l2.end();it++)cout<<*it<<"->";cout<<"NULL";
    return 0;
}
