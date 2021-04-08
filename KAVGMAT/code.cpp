#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    double a[n+1][m+1];
    memset(a,0,sizeof(a));
    ll res=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<=n;i++)
    {
        double sum=0;
        for(ll j=0;j<=m;j++)
        {
            sum+=a[i][j];
            a[i][j]=sum;
        }
    }
    for(ll j=0;j<=m;j++)
    {
        double sum=0;
        for(ll i=0;i<=n;i++)
        {
            sum+=a[i][j];
            a[i][j]=sum;
        }
    }
    ll xc=(m<n)?m:n;
    for(ll l=1;l<=xc;l++)
    {
        for(ll i=l;i<=n;i++)
        {
            for(ll j=l;j<=m;j++)
            {
                double f=a[i][j]+a[i-l][j-l]-a[i-l][j]-a[i][j-l];
                f=f/(l*l);
                if(f>=k)
                {
                    res++;
                }
            }
        }
    }

    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        printf("%d\n",solve());
    }
    return 0;
}
