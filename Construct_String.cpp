// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define read(arr,n) int arr[n]; for(int i=0;i<n;i++)cin>>arr[i];
// #define clone(a,b,n) ll a[n]; ll b[n]; for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];};
// #define takevect(a,n)   vector<int> a(n); for(int i=0;i<n;i++){int alpha; cin>>alpha;a.push_back(alpha)};
// #define printvect(v,n)    for(int i=0;i<n;i++){cout<<v[i]<< ;}
// #define umap unordered_map
// #define uset unordered_set
// #define lb lower_bound
// #define ub upper_bound
// #define fo(i,a,b) for(i=a;i<=b;i++)
// #define all(v) (v).begin(),(v).end()
// #define all1(v) (v).begin()+1,(v).end()
// #define allr(v) (v).rbegin(),(v).rend()
// #define allr1(v) (v).rbegin()+1,(v).rend()
// #define sort0(v) sort(all(v))
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef pair<ll, ll> pll;
// #define sz(x) (ll)x.size()
// #define pb push_back
// #define ppb pop_back
// #define mkp make_pair
// #define inf 1000000000000000005
// const ll mod = 1e9 + 7;
// #define make_upper(s){int i=0; while(i<s.length()){s[i]=toupper(s[i]);i++;}};
// #define make_lower(s){int i=0; while(i<s.length()){s[i]=tolower(s[i]);i++;}};
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
// /* ----------------------------------!!!!!!!! 	HERE GOES MY CODE     !!!!!!!!!!----------------------------------------------------------------------------*/
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
// int main(){
//  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//  int n;
//     cin>>n;
//     string s;

//     cin>>s;
//     string ans="";
//     int ct=1;
//    for(int i=0;i<s.length()-1;i++){
//     if(s[i]!=s[i+1]){
//         if(ct>2){
//             if(ct%2==0){
//                 ans+=s[i];
//                 ans+=s[i];
//             }
//             else{
//                 ans+=s[i];
//             }
//             ct=1;
//         }
//         else{
//             if(ct==2){
//                 ans+=s[i];
//                 ans+=s[i];
//             }
//             else{
//                 ans+=s[i];
//             }
//             ct=1;
//         }

//     }
//     else{
//         ct++;
//     }
//    }
//    ans+=s[n-1];
//     cout<<ans<<endl;
// }
 
// }












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
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
                                                                                                       
int main(){
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;
cin>>t;
while(t--){
 int n;
    cin>>n;
    string s;

    cin>>s;
    string ans="";
    int l=0;
    vector<string> v;
    int ct=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
          v.push_back(s.substr(l,ct));
            l=i+1;
            ct=1;
        }
        else{
            ct++;
            if(i+1==n-1){
                v.push_back(s.substr(l,ct));
            }
        }

    }
    for(auto i:v){
        if(i.length()>2){
            if(i.length()%2==0){
                ans+=i[0];
                ans+=i[0];
            }
            else{
                ans+=i[0];
            }
        }
        else{
            if(i.length()==2){
                ans+=i[0];
                ans+=i[0];
            }
            else{
                ans+=i[0];
            }
        }
    }
    if(s[n-1]!=s[n-2])
    ans+=s[n-1];
    cout<<ans<<endl;
 
}
}