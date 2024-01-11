#include<iostream>
#include<queue>
using namespace std;
void sortingArrayInDecendingOrder(int arr[])
{
    //Declaration wiht Initialization of Priority_queue
    priority_queue<int>pq(arr,arr+3);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
void sortingArrayInAssendingOrder(int arr[])
{
    //Declaration wiht Initialization of Priority_queue as min head ds
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+3);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    //priority_queue represents max heap data structure.


    int arr[]={10,5,20};

    sortingArrayInDecendingOrder(arr);
    cout<<endl;
    sortingArrayInAssendingOrder(arr);
    return 0;
}
