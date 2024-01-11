#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //priority_queue represents max heap data structure.

    //Declaration of Priority_queue
    priority_queue<int>pq;

    //push() Function
    //T.C.=O(logn)
    pq.push(10);pq.push(15);pq.push(5);

    //size() Function
    //T.C.=O(1)
    cout<<pq.size()<<endl;

    //top() Function
    //T.C.=O(1)
    cout<<pq.top()<<endl;


    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        //pop() Function
        //T.C.=O(logn)
        pq.pop();
    }
    return 0;
}

