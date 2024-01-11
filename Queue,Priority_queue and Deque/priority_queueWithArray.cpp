#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //priority_queue represents max heap data structure.


    int arr[]={10,15,5};

    //Declaration wiht Initialization of Priority_queue
    priority_queue<int>pq(arr,arr+3);


    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
