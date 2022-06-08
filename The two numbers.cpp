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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
while(ttt--) {
    int n;
    cin>>n;
    if(n==2)
    cout<<0<<endl;
    else{
    if(n%2!=0)
    {
        int a=n/2;
        int b=n-a;
        int g=__gcd(a,b);
        cout<<((a*b)-(g*g))/g<<endl;
    }
    else{
       int m=n/2;
        int a1=m-1;
        int b1=m+1;
        int c1=m+2;
        int d1=m-2;
        int a2=n-a1;
        int b2=n-b1;
        int c2=n-c1;
        int d2=n-d1;
        int g1=__gcd(a1,a2);
        int g2=__gcd(b1,b2);

        int g3=__gcd(c1,c2);

        int g4=__gcd(d1,d2);
        int ans1=((a1*a2)-(g1*g1))/g1;
        int ans4=((d1*d2)-(g4*g4))/g4;
        int ans2=((b1*b2)-(g2*g2))/g2;
        int ans3=((c1*c2)-(g3*g3))/g4;
        cout<<max({ans1,ans2,ans3,ans4})<<endl;

       }

       
    }
    
   
    
}
return 0;
}