#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1 {2,4,6,8};
    vector <int> v3 {1,3,5,7,9};
    vector <float> v2 {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};

    // lets print the vector 
    for(auto val : v3)
    {
        cout << val << " ";
    }
    cout << endl;

    for(auto val : v1){
        cout << val << " ";
    }
    cout << endl;

    // lets swap two vector 

cout << "Swaping two vector with swap function" << endl;
    v1.swap(v3);
    for(auto val : v3)
    {
        cout << val << " ";
    }
    cout << endl;

    for(auto val : v1){
        cout << val << " ";
    }
    cout << endl;



}