#include<iostream>
#include<set>
using namespace std;
int main()
{
    //multiset conatins duplicate elements


//1->

    //Declaration of multiset
    multiset<int>ms;

    //insert() Function
    //T.C.=O(logn)
    ms.insert(10);ms.insert(20);ms.insert(10);ms.insert(40);

    //Traversal of multiset
    for(auto x:ms)cout<<x<<" ";cout<<endl;


    //erase() Function
    //T.C.=O(logn)
    ms.erase(10);



    //Traversal of multiset
    for(auto x:ms)cout<<x<<" ";cout<<endl;

    ms.insert(10);ms.insert(10);
    cout<<ms.size()<<endl;


    //count() Function
    //T.C.=O(logn)
    cout<<ms.count(10)<<endl;



//2->

    //Declaration of multiset
    multiset<int>ms1;

    //insert() Function
    //T.C.=O(logn)
    ms1.insert(10);ms1.insert(20);ms1.insert(20);ms1.insert(40);


    //lower_bound(),upper_bound()
    //T.C.=O(logn)
    auto it1=ms1.lower_bound(20);
    auto it2=ms1.upper_bound(20);

    cout<<*it1<<" "<<*it2<<endl;



    //equal_range()
    //T.C.=O()
    auto it3=ms1.equal_range(20);

    cout<<*(it3).first<<" "<<*(it3).second;
    return 0;
}
