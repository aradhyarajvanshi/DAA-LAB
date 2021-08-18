#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int a = 1;
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
            {
                cout<< "YES" << endl;
                a = 0;
                break;
            }
        }
        if(a!=0)
            cout<< "NO" << endl;

    }
}
