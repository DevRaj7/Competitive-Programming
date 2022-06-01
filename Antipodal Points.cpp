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
int check_collinear(int x1, int y1, int x2, int y2, int x3, int y3){
   int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
   if (a == 0)
      return 0;
   else
      return 1;
}
float findCircle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int x12 = x1 - x2;
	int x13 = x1 - x3;

	int y12 = y1 - y2;
	int y13 = y1 - y3;

	int y31 = y3 - y1;
	int y21 = y2 - y1;

	int x31 = x3 - x1;
	int x21 = x2 - x1;

	// x1^2 - x3^2
	int sx13 = pow(x1, 2) - pow(x3, 2);

	// y1^2 - y3^2
	int sy13 = pow(y1, 2) - pow(y3, 2);

	int sx21 = pow(x2, 2) - pow(x1, 2);
	int sy21 = pow(y2, 2) - pow(y1, 2);

	int f = ((sx13) * (x12)
			+ (sy13) * (x12)
			+ (sx21) * (x13)
			+ (sy21) * (x13))
			/ (2 * ((y31) * (x12) - (y21) * (x13)));
	int g = ((sx13) * (y12)
			+ (sy13) * (y12)
			+ (sx21) * (y13)
			+ (sy21) * (y13))
			/ (2 * ((x31) * (y12) - (x21) * (y13)));

	int c = -pow(x1, 2) - pow(y1, 2) - 2 * g * x1 - 2 * f * y1;

	// eqn of circle be x^2 + y^2 + 2*g*x + 2*f*y + c = 0
	// where centre is (h = -g, k = -f) and radius r
	// as r^2 = h^2 + k^2 - c
	int h = -g;
	int k = -f;
	int sqr_of_r = h * h + k * k - c;

	// r is the radius
	float r = sqrt(sqr_of_r);

	// cout << "Centre = (" << h << ", " << k << ")" << endl;
	// cout << "Radius = " << r;
    return r;
}
bool antipodal(int x1,int y1,int x2,int y2,float r)
{ 
    r*=2;
if((r*r)==((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)))
return true;
else return false;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ttt; cin >> ttt;
while(ttt--) {
    long long n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        cin>>v[i].second;
    }
    long long ans=0;
    sort(all(v));
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                 if(check_collinear(v[i].first,v[i].second,v[j].first,v[j].second,v[k].first,v[k].second));
                 {
                     float r=findCircle(v[i].first,v[i].second,v[j].first,v[j].second,v[k].first,v[k].second);
                     
                     if(antipodal(v[i].first,v[i].second,v[j].first,v[j].second,r))
                     ans++;
                     else if(antipodal(v[i].first,v[i].second,v[k].first,v[k].second,r))
                     ans++;
                     else if(antipodal(v[j].first,v[j].second,v[k].first,v[k].second,r))
                     ans++;
                 }
            }
        }
    }
    cout<<ans<<"\n";
}
return 0;
}