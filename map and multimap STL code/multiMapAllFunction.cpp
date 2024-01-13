#include<iostream>
#include<map>
using namespace std;
int main()
{
//1->

    //Declaration of Multimap
    multimap<int,int>mp;

    //insert() Function
    //T.C.=O(logn)
    mp.insert({10,20});mp.insert({5,50});mp.insert({10,25});

    for(auto &x:mp)
        cout<<x.first<<" "<<x.second<<endl;

    //count() Function
    //T.C=O(logn)
    cout<<mp.count(10)<<endl;

    //erase() Function
    //T.C.=O(logn)
    mp.erase(10);

    cout<<mp.count(10)<<endl;

//2->


    //Declaration of Multimap
    multimap<int,int>mp1;

    //insert() Function
    //T.C.=O(logn)
    mp1.insert({10,5});mp1.insert({50,1});mp1.insert({20,3});mp1.insert({20,2});

    auto it1=mp1.lower_bound(20);
    auto it2=mp1.upper_bound(20);
    cout<<it1->first<< " "<<it2->first<<endl;

    auto it3=mp1.equal_range(20);

    for(auto itr=it3.first;itr!=it3.second;itr++)
        cout<<itr->first<<" "<<itr->second<<endl;
    return 0;
}
