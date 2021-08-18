#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t,n,ele,c=0,k;
    vector<int> v1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> ele;
            v1.push_back(ele);
        }
        cin >> k;
        // Applying brute force method
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(v1[i]-v1[j])==k)
                {
                    count+=1;
                }
            }
        }
        cout << count <<endl;
        v1.clear();
    }
}
