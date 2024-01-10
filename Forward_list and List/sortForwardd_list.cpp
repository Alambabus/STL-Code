
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
//1->
    forward_list<int>l={30,10,50,20,40};

    //reverse() Function
    //T.C.=O(nlogn)
    l.sort();
    for(int x:l)cout<<x<<"->";cout<<"NULL"<<endl;

//2->
    forward_list<int>l1={30,10,50,20,40};
    forward_list<int>l2={80,60,100,70,90};
    l1.merge(l2);//l2 will be empty after merging
    for(int x:l1)cout<<x<<"->";cout<<"NULL"<<endl;

    if(l1.empty())cout<<"List 1 is Empty";
    else cout<<"List 1 is not Empty";
    cout<<endl;
    if(l2.empty())cout<<"List 2 is Empty";
    else cout<<"List-2 is not Empty";

    return 0;
}
