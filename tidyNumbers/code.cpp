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

ll check(ll n,ll &co)
{
   ll nu,rem1,rem2,count=0,flag=0,j;
   nu=n;
   rem1=n%10;
   n=n/10;
   while(flag==0 && n!=0)
   {
      rem2=n%10;
      if(rem2>rem1)
       {
          count++;
          n=n/10;
       }
      else
       flag=1;
   }
      nu=nu/(pow(10,count+1));j=1;
    
         nu=nu*10+rem1;
    co=count;
    return nu;  
}

int main()
{
  freopen("B-large-practice.in","r",stdin);
 freopen("output1.out","w",stdout);
   ll t,q;
   cin>>t;
   q=1;
   while(q<=t)
   {
       ll n,i,nu,nn,cou=0,j,sn,cou2,ans=INT_MIN,rem1,rem2,flag=0,rev,count=0,rem,co;
       cin>>n;
       nu=n;
       while(nu!=0)
       {
           cou++;
           nu=nu/10;
       }
       nu=n;rev=0;
       while(nu!=0)
       {
           rem=nu%10;
           rev=rev*10+rem;
           nu=nu/10;
       }
       nu=rev;
       rem1=nu%10;nu=nu/10;count=1;nn=rem1;
       while(nu!=0 || count!=cou)
       {
          
           rem2=nu%10;
           if(rem2>=rem1)
           {
               nn=nn*10+rem2;
               rem1=rem2;
               count++;
               nu=nu/10;
           }
           else
           {
               nn--;co=0;
                nn=check(nn,co);
                 count=count-co;
               while(count!=cou)
               {
                   nn=nn*10+9;
                   count++;
               }
               break;
           }
       }
      cout<<"Case #"<<q<<": "<<nn<<endl;
         q++;
   }
}


