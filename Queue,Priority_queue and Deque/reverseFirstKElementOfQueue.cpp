#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseFirstKElementOfQueue(queue<int> &q,int k)
{
    stack<int>s;
    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++)
    {
        q.push(q.front());
        q.pop();
    }
}
int main()
{

    //Input: Q={10,20,30,40,50}, K=3
    //Output: Q={30,20,10,40,50}


    //Declaration of queue
    queue<int>q;

    //push() Function
    //T.C.=O(1)
    q.push(10);q.push(20);q.push(30);q.push(40);q.push(50);

    int k=3;
    reverseFirstKElementOfQueue(q,k);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
