#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    //forward_list represent singly Linked List

    //Declaration with Initialization of forward_list
    forward_list<int>l={15,20,30};

    //insert_after() Function
    //T.C.=O(1) or O(m)
    auto it=l.insert_after(l.begin(),10);
    it=l.insert_after(it,{2,3,5});

    //emplace_after() Function
    //T.C.=O(1) or O(m)
    it=l.emplace_after(it,40);

    //erase_after() Function
    //T.C.=O(1) or O(m)
    it=l.erase_after(it);

    for(int x:l)cout<<x<<"->";cout<<"NULL";
    return 0;
}
