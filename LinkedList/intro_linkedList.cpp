#include<bits/stdc++.h>
using namespace std;
forward_list<int> f(int a[],int n)
{
    
            forward_list<int> l;
            for(int i = 0;i<n;i++)
            {
                l.push_front(a[i]);
            }
        return l;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i = 0;i<n;i++)
        {
            cin >>a[i];
        }
        forward_list<int> l = f(a,n);
        for(auto  e :l)
        {
            cout << e << " ";
        }
        
    }

}