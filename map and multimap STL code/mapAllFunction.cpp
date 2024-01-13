#include<iostream>
#include<map>
using namespace std;
int main()
{
//1->

    //Declaration of map STL
    map<int,int>m;

    //insert() Function
    //T.C.=O(logn)
    m.insert({10,200});m[5]=100;m.insert({3,300});

    //Traversal of map
    for(auto &x:m)cout<<x.first<<" "<<x.second<<endl;

    //size() Function
    //T.C.=O(1)
    cout<<m.size()<<endl;
    cout<<m[2]<<endl;
    cout<<m.size()<<endl;


    //Traversal of map using iterator
    for(auto it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;

    //clear() Function
    //T.C.=O(n)
    m.clear();
    cout<<m.size()<<endl;


//2->
    //Declaration of map STL
     map<int,string>m1;

    //insert() Function
    //T.C.=O(logn)
    m1.insert({5,"gfg"});m1[2]="ide";m1.insert({1,"practice"});


    //find() Function
    //T.C.=O(logn)
    if(m1.find(5)==m1.end())cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;

    //count() Function
    //T.C.=O(logn)
    if(m1.count(2)==0)cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;


    //lower_bound() Function
    //T.C.=O()
    auto it1=m1.lower_bound(2);
    auto it2=m1.upper_bound(2);
    if(it1!=m1.end())
    cout<<(*it1).first<<" "<<(*it1).second<<endl;
    else cout<<"Not Equal or Greater value."<<endl;
    if(it2!=m1.end())
    cout<<(*it2).first<<" "<<(*it2).second<<endl;
    else cout<<"Not Greater value."<<endl;




//3->



    //Declaration of map STL
     map<int,string,greater<int>>m2;

    //insert() Function
    //T.C.=O(logn)
    m2.insert({5,"gfg"});m2[2]="ide";m2.insert({1,"practice"});

    auto it3=m2.upper_bound(2);

    if(it3!=m2.end())
    cout<<(*it3).first<<endl;
    else cout<<"No Greater value"<<endl;

    cout<<m2.size()<<endl;
    m2.erase(5);
    cout<<m2.size()<<endl;
    m2.erase(m2.find(2),m2.end());
    cout<<m2.size()<<endl;


    return 0;
}
