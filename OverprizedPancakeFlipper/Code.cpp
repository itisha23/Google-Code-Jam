#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define fast ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define mod 1000000007
#define inf 2e18
#define pb push_back
#define fi first
#define se second

typedef int l;
typedef unsigned int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vi;


int main()
{
 
freopen("A-large-practice.in","r",stdin);
freopen("output1.out","w",stdout);
   ll n,t;
   cin>>n;
   t=1;
   while(t<=n)
   {
     ll k,i,cou=0,flag=0,j;
     string s;
     cin>>s;
     cin>>k;
     for(i=0;i<=s.size()-k;i++)
      {
         if(s[i]=='-')
         {
             s[i]='+';
              j=1;
              while(j<k)
             {
             if(s[i+j]=='-')
                s[i+j]='+';
             else
                s[i+j]='-';
                 j++;
            }
          cou++;
        
         }
      }
        for(i=0;i<s.size();i++)
         { if(s[i]=='-')
             {
                 // cout<<i<<endl;
                  flag=1;
                  break;
             }
         }
        if(flag)
        cout<<"Case #"<<t<<":"<<" "<<"IMPOSSIBLE"<<endl;
        else
         cout<<"Case #"<<t<<":"<<" "<<cou<<endl;
      t++;
   }
}


