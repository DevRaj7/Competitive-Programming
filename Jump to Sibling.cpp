#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() 
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define pss pair<string, string>
    #define ff first
#define ss second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vs vector<string>
#define vvs vector<vector<string>>
#define vpii vector<pair<int,int>>
#define vpis vector<pair<int,string>>
#define vpss vector<pair<string,string>>
#define mpii map<int,int>
#define mpis map<int,string>
#define mpss map<string,string>
#define si set<int>
#define sst set<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
while(ttt--) {
    int n;
    cin>>n;
     vi v(n);
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         v[i]=x;
     }
     int s=v[0];
     int e=v[n-1];
     int counte=0,counto=0;
     for(int i=1;i<n-1;i++)
     {
         if(v[i]&1)
         counto++;
         else counte++;
     }
     if(s%2==0&&e%2==0)
     {
         if(counte==0)
         cout<<1<<"\n";
         else if(counto=0)
         cout<<n-1<<"\n";
         else 
         cout<<counte+1<<"\n";
        
         }
         else if(s%2==1&&e%2==1)
         {
              if(counto==0)
         cout<<1<<"\n";
         else if(counte=0)
         cout<<n-1<<"\n";
         else 
         cout<<counto+1<<"\n";
         }
         else{
             cout<<min(counte,counto)+1<<"\n";
         }

     }

return 0;
}