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

    int n;
    cin>>n;
    bool grid[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char ch;
            cin>>ch;
          if(ch=='.')
          grid[i][j]=0;
          else grid[i][j]=1;
        }
    }
  int dp[n][n];
 for(int i=n-1;i>=0;i--)
 {
     for(int j=n-1;j>=0;j--)
     {    
         if(i==n-1&&j==n-1)
         dp[i][j]=1;
         else{
         int option1=(i==n-1)?0:dp[i+1][j];
         int option2=(j==n-1)?0:dp[i][j+1];
         dp[i][j]=(option1+option2)%MOD;
         if(grid[i][j]==1)
         dp[i][j]=0;
         }
     }
 }
 if(grid[n-1][n-1]==1)
 cout<<0;
 else
cout<<dp[0][0];
return 0;
}