#include<iostream>
#include<queue>
using namespace std;

void parchesingMaximumItems(int arr[],int sum)
{
    int counts=0;
    //Declaration with Initialization of Priority_queue as min heap ds
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+5);
    while(!pq.empty())
    {
        sum-=pq.top();
        pq.pop();
        if(sum>=0)
        counts++;
        else break;
    }
    cout<<counts;
}
int main()
{
    //Input: arr=[1,12,5,111,200],sum=10
    //Output:2
    //Input: arr=[20,10,5,30,100],sum=35
    //Output:3


    int arr[]={20,10,5,30,100};
    int sum=35;
    parchesingMaximumItems(arr,sum);
    return 0;
}

