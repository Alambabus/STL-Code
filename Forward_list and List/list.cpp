#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list represent doubly linked List

    //Declaration wiht Initialization of list container
    list<int>l={10,20,30,40,50};

    //push_back() Function
    //T.C.=O(1)
   l.push_back(60);l.push_back(70);


   //push_front() Function
   //T.C.=O(1)
    l.push_front(5);l.push_front(1);


    //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;


    //pop_back() Function
    //T.C.=O(1)
   l.pop_back();l.pop_back();


   //push_front() Function
   //T.C.=O(1)
   l.pop_front();l.pop_front();


   //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;
   return 0;
}
