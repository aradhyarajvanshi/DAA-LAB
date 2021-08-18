#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input1.txt", "r", stdin);   //input to be taken from input.txt
    freopen("output.txt", "w", stdout); //output to be printed in output.txt
    int t,n,k,ele,l,c=0;
    vector<int> v1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>ele;
            v1.push_back(ele);
        }
        cin>>k;
        // linear Search
        for(l=0;l<v1.size();l++)
        {
            if(v1[l]==k)
            {
                cout<<"present "<<l+1<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<"Not Present "<<v1.size()<<endl;
        c=0;
        v1.clear();
    }
    return 0;
}
