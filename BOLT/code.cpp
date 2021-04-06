#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;
    double res=k1*k2*k3;
    res=res*v;
    res=100/res;
    int y=round(res*100);
   if(y>=958)
   {
       cout<<"NO"<<endl;
   }
   else{
       cout<<"YES"<<endl;
   }
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}