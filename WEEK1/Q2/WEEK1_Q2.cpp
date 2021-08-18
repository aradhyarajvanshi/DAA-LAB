#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, n, k, ele,c=0;
    vector<int>v1;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
        {
            cin>>ele;
            v1.push_back(ele);
        }
        cin>>k;

        // binary Search
        int l=0,h=n-1,mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(k==v1[mid])
            {
                cout<< "present "<<mid<<endl;
                c=1;
                break;
            }
            else if(k>v1[mid])
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        if(c==0)
            cout<< "Not present "<< n<<endl;
        c=0;
        v1.clear();
    }
    return 0;
}
