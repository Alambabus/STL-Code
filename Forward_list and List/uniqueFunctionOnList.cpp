#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list represent doubly linked List

    //Declaration wiht Initialization of list container
    list<int>l={10,15,15,20,20,10};
    l.unique();


    //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;

    //reverse() Function
    //T.C.=O(n)
    l.reverse();


    //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;


   return 0;
}

