
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void reverseString(string &st)
{
    //using reverse() Function
    //reverse(st.begin(),st.end());


    //using stack

    //Declaration of stack
    stack<char>s;

    for(auto x:st)s.push(x);

    //traversal of Satck
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }


}
int main()
{
    string st="mala dazhahS";
    reverseString(st);
    return 0;
}
