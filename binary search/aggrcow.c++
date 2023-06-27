// problem link ----->  https://www.spoj.com/problems/AGGRCOW/


// code .....







#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
#define clone(a,b,n) ll a[n]; ll b[n]; for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];};
#define takevect(a,n)   vector<int> a(n); for(int i=0;i<n;i++){int alpha; cin>>alpha;a.push_back(alpha)};
#define printvect(v,n)    for(int i=0;i<n;i++){cout<<v[i]<< ;}
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll)x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;
#define make_upper(s){int i=0; while(i<s.length()){s[i]=toupper(s[i]);i++;}};
#define make_lower(s){int i=0; while(i<s.length()){s[i]=tolower(s[i]);i++;}};
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
/* ----------------------------------!!!!!!!! 	HERE GOES MY CODE     !!!!!!!!!!----------------------------------------------------------------------------*/
                                                                                                       
                                                                                                       
const int N=1e5+10;
int n,c;
int positions[N];                                                                                                      
                                                                                                       
bool canplacecows(int mindis){
    int last_pos=-1;
    int cows_left=c;
    for(int i=0;i<n;i++){
        if(positions[i]-last_pos>=mindis || last_pos==-1){
            cows_left--;
            last_pos=positions[i];
        }
        if(cows_left==0){
            return true;
        }
    }
    return cows_left==0;
}                                                                                                       
                                                                                                       
int main(){
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;
cin>>t;
while(t--){
  cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>positions[i];
    }
    sort(positions,positions+n);
    int lo=0,hi=1e9,mid;
    while(hi-lo>1){
        mid=(lo+hi)/2;
        if(canplacecows(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(canplacecows(hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
}
 
}