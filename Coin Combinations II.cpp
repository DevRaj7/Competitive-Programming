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
int ttt=1;
while(ttt--) {
    int n,x;
    cin>>n>>x;
vector<int> v(n+1);
for(int i=1;i<=n;i++)
{
    cin>>v[i];
}
int dp[n+1][x+1];
for(int i=1;i<=n;i++)
{
    for(int sum=0;sum<=x;sum++)
    {
        if(sum==0)
        dp[i][sum]=1;
        else{
            int option1=(i==1)?0:dp[i-1][sum];
            int option2=(sum<v[i])?0:dp[i][sum-v[i]];
            dp[i][sum]=(option1+option2)%MOD;
        }
    }
}
cout<<dp[n][x];
}
return 0;
}