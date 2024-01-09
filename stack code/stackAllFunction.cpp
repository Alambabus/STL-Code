#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //Declaration of stack
    stack<int>s;

    //push() Function
    //T.C.=O(1)
    s.push(10);s.push(20);s.push(30);

    cout<<"size of stack: "<<s.size()<<endl;

    //top() Function
    //T.C.=O(1)
    cout<<"Top element of stack: "<<s.top()<<endl;

    //pop() Function
    //T.C.=O(1)
    s.pop();
    cout<<"Top element of stack: "<<s.top()<<endl;
    s.push(30);


    //traversal of Satck

    //empty() Function
    //T.C.=O(1)
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
