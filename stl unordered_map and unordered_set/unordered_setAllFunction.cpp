#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
//1->
    //Declaration of unordered_set
    unordered_set<int>s;

    //insert() Function
    //T.C.=O(1) in Average case
    s.insert(10);s.insert(5);s.insert(15);s.insert(20);

    //Treaversal of unordered_set using for each loop
    for(int x:s)cout<<x<<" ";cout<<endl;

    //Treaversal of unordered_set using Iterator
    for(auto it=s.begin();it!=s.end();it++)cout<<(*it)<<endl;


    //size() Function
    //T.C.=O(1)
    cout<<s.size()<<endl;


    //clear() Function
    //T.C.=O(1) in Average case
    s.clear();

    //size() Function
    //T.C.=O(1)
    cout<<s.size()<<endl;

    //insert() Function
    //T.C.=O(1) in Average case
    s.insert(10);s.insert(5);s.insert(15);s.insert(20);

    //find() Function
    //T.C.=O(1) in Average case
    if(s.find(10)==s.end())cout<<"Not Found Element"<<endl;
    else cout<<"Found Element"<<endl;

    //count() Function
    //T.C.=O(1) in Average case
    if(s.count(10)==0)cout<<"Not Found Element"<<endl;
    else cout<<"Found Element"<<endl;

    //size() Function
    //T.C.=O(1)
    cout<<s.size()<<endl;


    auto it=s.find(15);

    //erase() Function
    //T.C.=O(1) in Average case
    s.erase(it);

    //size() Function
    //T.C.=O(1)
    cout<<s.size()<<endl;

    //erase() Function
    //T.C.=O(1) in Average case
    s.erase(s.begin(),s.end());


    //size() Function
    //T.C.=O(1)
    cout<<s.size()<<endl;

    return 0;
}
