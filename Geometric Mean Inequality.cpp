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
    int cntpos=count(all(v),1);
    int cntneg=count(all(v),-1);
   if(cntpos&1)
      {
          if(cntneg>=cntpos-1&&cntneg<=cntpos+1)
          cout<<"Yes"<<"\n";
          else cout<<"No"<<"\n";

      }
      else{
          if(cntneg>=cntpos-2&&cntneg<=cntpos+2)
          cout<<"Yes"<<"\n";
          else cout<<"No"<<"\n";
      }

        
   
    
}
return 0;
}