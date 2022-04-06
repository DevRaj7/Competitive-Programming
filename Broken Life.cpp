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
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0; 
 
   
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    // I
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
vector<char> v={a, b, c, d, e} ;
while(ttt--) {
    int x,y;
    cin>>x>>y;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {   
             if(s1[i]=='?')
             for(int j=0;j<5;j++)
             {
                 s1[i]=v[j];
                 if(!isSubSequence(s2,s1,y,x))
                 {
                     cout<<s1<<"\n";
                     break;
                 }
             }
    }
    

   cout<<-1<<"\n";

    


return 0;
}
}