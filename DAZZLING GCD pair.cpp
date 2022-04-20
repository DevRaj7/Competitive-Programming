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
    int A,B;
    cin>>A>>B;
    if(A%2==0 && A>1)
        {
            if(B>=A+2)
            cout<<A<<" "<<A+2<<endl;
            else cout<<-1<<endl;
        }
        else
        {
            if(A%3==0)
            {
                if(B>=A+3) cout<<A<<" "<<A+3<<endl;
                else cout<<-1<<endl;
            }
            else
            {
                if(B>=A+1 && B>=A+3)
                cout<<A+1<<" "<<A+3<<endl;
                else cout<<-1<<endl;
            }
        }

}
return 0;
}