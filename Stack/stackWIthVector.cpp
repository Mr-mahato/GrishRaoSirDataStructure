#include<bits/stdc++.h>
using namespace std;
// function to push an element into the stack
void insert(stack<int> &s,int x)
{
    s.push(x);
}

// function to pop element from stack
void remove(stack<int>&s)
{
    s.pop();
}

// function to print the top element of stack
void headOf_Stack(stack<int> &s)
{
    int x = s.top();
    cout << x << " " << endl;
}

// function to search an element in the stack
bool find(stack<int> s,int val)
{
    bool exists=false;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        if(x==val)
        {
            exists=true;
        }
    }
    if(exists==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        stack<int> s;
        int q;
        cin >> q;
        cin.get();
        while(q--)
        {
            char ch;
            cin >> ch;
            // this operation will remove the element or pop the head
            if(ch=='i')
            {
                int x;
                cin >> x;
                insert(s,x);
            }
           else if(ch=='r')
            {
                remove(s);
            }
            // this will print the top of stack
            else if(ch=='h')
            {
                headOf_Stack(s);
            }
            // this will find the values in the stack
            else if(ch=='f')
            {
                int x ;
                cin >> x;
                if(find(s,x))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        return 0;
    }
}