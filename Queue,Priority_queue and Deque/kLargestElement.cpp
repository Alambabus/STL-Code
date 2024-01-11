#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void kLargestElement(int arr[],int k)
{
    stack<int>s;
    //Declaration with Initialization of Priority_queue
    priority_queue<int>pq(arr,arr+5);
    for(int i=0;i<2;i++)
    {
        s.push(pq.top());
        pq.pop();
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    //Input: arr=[5,15,10,20,8],k=2
    //Output:arr=[15,20]


    int arr[]={5,15,10,20,8};
    int k=2;
    kLargestElement(arr,k);
    return 0;
}

