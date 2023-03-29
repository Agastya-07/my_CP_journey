#include<bits/stdc++.h>
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int x;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
        }
    vector<int> v_p;
    vector<int> v_n;
    // vector<int> v;

    int sum_n=0, sum_p=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>=0){
            v_p.push_back(a[i]);
            sum_p+=a[i];
        }
        else{

            v_n.push_back(a[i]);
            sum_n+=(-1*a[i]);
        }
    }
 
        sort(v_p.begin(), v_p.end());
        sort(v_n.begin(), v_n.end());
    
      if(sum_n>sum_p){
      
    cout<<"YES"<<endl;
   
    for(int i=0;i<v_n.size();++i)
		cout<<v_n[i]<<' ';
      for(int i=0;i<v_p.size();++i)
		cout<<v_p[v_p.size()-1-i]<<' ';
        cout<<endl;

    }
    else if(sum_n<sum_p){
      
    cout<<"YES"<<endl;
  
     for(int i=0;i<v_p.size();++i)
		cout<<v_p[v_p.size()-1-i]<<' ';

      for(int i=0;i<v_n.size();++i)
		cout<<v_n[i]<<' ';
        cout<<endl;
    }
   
    else if(sum_n==sum_p){
        cout<<"NO"<<endl;
    }
 }
}