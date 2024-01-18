#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //Declaration of unordered_map
    unordered_map<string,int>m;

    m["gfg"]=20;m["ide"]=30;

    //insert() Function
    //T.C.=O(1) in Average case
    m.insert({"course",130});

    //Traversal of unordered_map using for each loop
    for(auto x:m)
        cout<<x.first<<" "<<x.second<<endl;

    //find() Function
    //T.C.=O(1) in an average case
    if(m.find("gfg") != m.end())cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;


    //Traversal of unordered_map using Iterator
    for(auto it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;

    //count() Function
    //T.C.=O(1) in an average case
    if(m.count("gfg")>0)cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;


    //size() Function
    //T.C.=O(1)
    cout<<m.size()<<endl;

    //erase() Function
    //T.C.=O(1) in average case
    m.erase("ide");

    cout<<m.size()<<endl;
    return 0;
}
