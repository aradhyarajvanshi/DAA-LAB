#include<iostream>
#include<vector>

using namespace std;

string check(vector<int> v, int n)
{
    for(int i=0;i<v.size();i++)
    {
    if(n==v[i])
        return "the element is present in array:";
    }
    return "Element is not present in array:";
}

int main()
{
    int t,n,k,a;
    vector<int> v1;
    cout<<"Input no. of test cases:- " << endl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Input the Limit:- "<<endl;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            v1.push_back(a);
        }
        cout<<"Input the key Element to find:- " ;
        cin>>k;
        cout<<check(v1,k)<<endl;
        v1.clear();
    }
}
