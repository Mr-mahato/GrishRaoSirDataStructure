#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(10);
    // v.push_back(10);


    //  this is the alternatively way where you will have a vector and 
    // the same value
    vector <int> v(3,10);
    for(auto e: v)
    {
        cout << e << " ";
    }
    cout << endl;

    // lets de
    cout<<"This is the example of initilazation of vector" << endl;
    vector <int> diff{1,2,3,4,5,45};
    for(auto e : diff)
    {
        cout << e << " " ;
    }
    cout << endl;

    // conversion of array to vector
    cout << "This is the array " << endl;
    int arr[] = {1,3,5,7,9};
    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    // lets write a vecotr
    cout << "This is vector made with the help of array elemnets: " << endl;
    int n = sizeof(arr)/sizeof(int);
    vector <int> arrmade(arr,arr+n);
    for(auto e : arrmade)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "Lets copy the vector of arrmade to another one" << endl;
    vector <int> copyVector(arrmade);

    for(auto val : copyVector)
    {
        cout << val << " " ;
    }
    cout << endl;
}