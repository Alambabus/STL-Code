#include<iostream>
#include<queue>
using namespace std;
int main()
{
//1->
    //Declaration with Initialization of dequeue
    deque<int>dq={10,20,30};


    //push_front() Function
    //T.C.=O(1)
    dq.push_front(5);


    //push_back() Function
    //T.C.=O(1)
    dq.push_back(50);


    //Traversal of dequeue
    for(auto x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<dq.front()<<" "<<dq.back()<<endl;
//2->
    deque<int>dq1={10,15,30,5,12};
    auto it=dq1.begin();
    it++;

    //insert() Function
    //T.C.=O(n)
    dq1.insert(it,20);


    //pop_back() Function
    //T.C.=O(1)
    //pop_front() Function
    //T.C.=O(1)
    dq1.pop_front();
    dq1.pop_back();
    //Traversal of dequeue
    for(auto x:dq1)
    {
        cout<<x<<" ";
    }
    return 0;
}
