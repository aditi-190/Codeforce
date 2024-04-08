#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
        p[i].first *=-1;
    }
    sort(p.begin(),p.end());
    int ans=0;
    for(auto u:p)
    {
        if(u==p[k-1]) ans++;//k-1 karon 0 base index
    }
    cout<<ans<<endl;

    return 0;
}

