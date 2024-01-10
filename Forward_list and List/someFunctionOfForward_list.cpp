#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>l={10,20,30,40,50};

    //reverse() Function
    //T.C.=O(n)
    l.reverse();
    for(int x:l)cout<<x<<"->";cout<<"NULL";
    cout<<endl;


    //empty() Function
    //T.C.=O(1)
    if(l.empty())cout<<"List is Empty";
    else cout<<"List is not Empty";
    cout<<endl;


    //clear() Function
    //T.C.=O(n)
    l.clear();
    if(l.empty())cout<<"List is Empty";
    else cout<<"List is not Empty";
    return 0;
}
