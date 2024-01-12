#include<iostream>
#include<set>
using namespace std;
int main()
{
    //Set contains unique element

//1->
    //Declaration of set STL
    set<int>s;


    //insert() Function
    //T.C.=O(logn)
    s.insert(10);s.insert(5);s.insert(20);


    //Traversal of set using for each loop
    for(auto x:s)cout<<x<<" ";cout<<endl;

//2->

    //Declaration of set as Element print in Desending Order
    set<int,greater<int>>s1;


    //insert() Function
    //T.C.=O(logn)
    s1.insert(10);s1.insert(5);s1.insert(20);s1.insert(10);s1.insert(5);


    //Traversal of set using Iterator
    for(auto it=s1.begin();it!=s1.end();it++)cout<<*it<<" ";cout<<endl;



//3->

    //Declaration of set STL
    set<int>s2;


    //insert() Function
    //T.C.=O(logn)
    s2.insert(10);s2.insert(5);s2.insert(20);

    //find() Function
    //T.C.=O(logn)
    auto it=s2.find(10);

    if(it!=s2.end())cout<<"Found Element in Set 2";
    else cout<<"Not Found Element in Set 2";
    cout<<endl;


    //clear() Function
    //T.C.=O(logn)
    s2.clear();


    //size() Function
    //T.C.=O(1)
    cout<<s2.size()<<endl;



//4->

     //Declaration of set STL
    set<int>s3;


    //insert() Function
    //T.C.=O(logn)
    s3.insert(10);s3.insert(5);s3.insert(20);



    //count() Function
    //T.C.=O(logn)
    if(s3.count(10))cout<<"Found Element in Set 3";
    else cout<<"Not Found Element in Set 3";
    cout<<endl;


    //erase() Function
    //T.C.=O(logn)
     s3.erase(5);


    //Traversal of set using for each loop
    for(auto x:s3)cout<<x<<" ";cout<<endl;



//5->




    //Declaration of set STL
    set<int>s4;


    //insert() Function
    //T.C.=O(logn)
    s4.insert(10);s4.insert(5);s4.insert(20);s4.insert(7);

    auto it1=s4.find(7);
    s4.erase(it1);
    for(auto x:s4)cout<<x<<" ";cout<<endl;

    s4.insert(7);

    it1=s4.find(7);

    s4.erase(it1,s4.end());
    for(auto x:s4)cout<<x<<" ";cout<<endl;



 //6->


    //Declaration of set STL
    set<int>s5;


    //insert() Function
    //T.C.=O(logn)
    s5.insert(10);s5.insert(5);s5.insert(20);


    //lower_bound() Function
    //T.C.=O(logn)
    auto it2=s5.lower_bound(5);

    if(it2!=s5.end())cout<<(*it2);
    else cout<<"Not present in set 5";
    cout<<endl;

    //upper_bound() Function
    //T.C.=O(logn)
    it2=s5.upper_bound(5);

    if(it2!=s5.end())cout<<*it2;
    else cout<<"Not present in set 5";
    cout<<endl;


    return 0;
}
