#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1 {6,3,1,823,1,578};
    int m = v1.end()-v1.begin(); // this will give you the length of the vector


    
    cout << m << endl;

    // sorting of vector
    sort(v1.begin(),v1.end());

    for(auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;
}