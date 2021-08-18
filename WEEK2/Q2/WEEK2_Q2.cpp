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
        // Applying brute force method
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int m=j+1; m<n; m++)
                {
                    if(v1[i]+v1[j] == v1[m])
                    {
                        cout << i+1 <<", "<<j+1<<", "<<m+1 << endl;
                        c = 1;
                        break;
                    }
                }
                if(c == 1)
                    break;
            }
            if(c == 1)
                break;
        }
        if(c==0)
            cout << "No sequence found" << endl;
        v1.clear();
        c =0;
    }
}
