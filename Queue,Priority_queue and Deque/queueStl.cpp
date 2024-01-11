#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //Declaration of queue
    queue<int>q;

    //push() Function
    //T.C.=O(1)
    q.push(10);q.push(20);q.push(30);

    //front(), back() Function
    //T.C.=O(1)
    cout<<q.front()<<" "<<q.back()<<endl;

    //pop() Fuction
    //T.C.=O(1)
    q.pop();

    cout<<q.front()<<" "<<q.back()<<endl;

    q.push(10);

    //empty() FUnction
    //T.C.=O(1)
    while(!q.empty())
    {
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();
    }

    //size() Function
    //T.C.=O(1)
    cout<<q.size();
    return 0;
}
