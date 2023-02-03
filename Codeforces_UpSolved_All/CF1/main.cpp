#include <bits/stdc++.h>
#define int long long
using namespace std;

bool solve(){
    char a;
    cin>>a;
    string str ="codeforces";
    for(int i=0;i<str.size();i++){
        if(str[i]==a){
            return true;
        }
    }
    return false;

}

int32_t main()
{
    int t;
    cin>>t;
    while(t--){
        bool p = solve();
        if(p==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
