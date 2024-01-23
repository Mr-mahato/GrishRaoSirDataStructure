//  lets introduce to the 2d vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //   this is the 1d vector

    // this is the 2d vector
    // int r = 2;
    // int c = 2;
    vector <vector<int>> ve (r,vector<int>(c));
    // for(int i = 0;i<2;i++)
    // {
    //     for(int j = 0;j<2;j++)
    //     {
    //         cin >> ve[i][j];
    //     }
    // }

    // for(int i = 0;i<2;i++)
    // {
    //     for(int j = 0;j<2;j++)
    //     {
    //         cout << ve[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    /*
    this will create :
    1 2
    3 4*/

    //  Initilization at creating 2D vectors
    vector <vector<int>> init  = {
        {1,2,3},
        {1,2,4},
        {1,4,6}
    };

    //   for(int i = 0;i<init.size();i++)
    // {
    //     for(int j = 0;j<init[0].size();j++)
    //     {
    //         cout << init[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(vector<int> v1:init)
    {
        for(auto e : v1)
        {
            cout << e << " ";
        }
        cout << endl;
    }


}