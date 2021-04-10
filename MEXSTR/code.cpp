// PARTIAL MARKS 20/100 MARKS

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000
bool existenceIs(string fg,string s)
{
    for(int i=0,j=0;i<s.size();i++)
    {
         if(s[i]==fg[j])
         {
             j++;
         }
         if(j==fg.size())
         {
             return true;
         }
    }
    return false;
}
string sx(string s)
{
    queue<string> q;
    q.push("1");
    while(1)
    {
        string fg=q.front();
        q.pop();
        if(!existenceIs(fg,s))
        {
            return fg;
        }
        string fh=fg;
        fg+="0";
        fh+="1";
        q.push(fg);
        q.push(fh);
    }
    return "0";
}
string solve()
{
    string s;cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            c++;
        }
    }
    if(c==0)
    {
        return "0";
    }
    return sx(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
