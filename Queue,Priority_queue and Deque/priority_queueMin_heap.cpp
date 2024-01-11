#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //priority_queue represents max heap data structure.
    //but we can make priority_queue as a min heap data structure.

    //Declaration of Priority_queue as a min heap data structure.
    priority_queue<int,vector<int>,greater<int>>pq;

    //push() Function
    //T.C.=O(logn)
    pq.push(10);pq.push(15);pq.push(5);

    //size(1) Function
    //T.C.=O()
    cout<<pq.size()<<endl;

    //top(1) Function
    //T.C.=O()
    cout<<pq.top()<<endl;


    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
