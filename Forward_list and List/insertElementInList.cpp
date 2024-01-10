#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list represent doubly linked List

    //Declaration wiht Initialization of list container
    list<int>l={10,20,30};
    auto it=l.begin();
    it++;

    //insert() Function
    //T.C.=O()
    it=l.insert(it,15);
    it=l.insert(it,2,7);


    //Traversal of List
    cout<<"NULL";
    for(auto x:l)cout<<"<-"<<x<<"->";cout<<"NULL"<<endl;


    //front(),back(),size()
    //T.C.=O(1)
    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size();


   return 0;
}

