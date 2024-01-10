#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list represent doubly linked List

    //Declaration wiht Initialization of list container
    list<int>l={10,20,30,40,20,40};
    auto it=l.begin();

    //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;


    //erase(),remove() Function
    //T.C.=O(n)
    it=l.erase(it);
    l.remove(40);


    //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;



   return 0;
}

