#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    // (x,y)=>(0,0)
    //U=(x,y+1) D=(x,y-1) L=(x-1,y) R=(x+1,y)
    int x=0,y=0,p=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='U'){
            y=y+1;
            if(x==1 && y==1){
                p=1;
                   break;
            }
        }else if(str[i]=='R'){
            x=x+1;
            if(x==1 && y==1){
                p=1;
                   break;
            }
        }
        else if(str[i]=='L'){
            x=x-1;
           if(x==1 && y==1){
                p=1;
                   break;
            }
        }else if(str[i]=='D'){
             y=y-1;
           if(x==1 && y==1){
                p=1;
                   break;
            }
        }
    }
    if(p==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
