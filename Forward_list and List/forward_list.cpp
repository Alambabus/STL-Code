#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    //forward_list represent singly Linked List

    //Declaration with Initialization of forward_list
    forward_list<int>l={10,20,30};

    //push_front() Function
    //T.C.=O(1)
    l.push_front(5);l.push_front(3);

    //push_front() Function
    //T.C.=O(1)
    l.pop_front();

    for(int x:l)cout<<x<<"->";cout<<"NULL";
    return 0;
}
