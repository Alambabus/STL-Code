#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list represent doubly linked List

    //Declaration wiht Initialization of list container
    list<int>l1={10,20,30,40,20,40};
    list<int>l2={50,60,70,80,90,100};


    //merge() Function
    //T.C.=O(n)
    l1.merge(l2);


    //Traversal of List
    cout<<"NULL";
    for(auto x:l1)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;

    if(l1.empty())cout<<"Empty";
    else cout<<"Not Empty";
    cout<<endl;


    if(l2.empty())cout<<"Empty";
    else cout<<"Not Empty";
    cout<<endl;


    //sort() Function
    l1.sort();

    //Traversal of List
    cout<<"NULL";
    for(auto x:l1)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;


   return 0;
}

