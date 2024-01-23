#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1 {1,3,5,7,9};

// simple iterator
    for(vector <int> :: iterator it = v1.end()-1;it!=v1.begin();it--)
    {
        cout << *it << " ";
    }
    cout << endl;

    // reverse iterator
     for(vector <int> :: reverse_iterator it = v1.rbegin();it!=v1.rend();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}