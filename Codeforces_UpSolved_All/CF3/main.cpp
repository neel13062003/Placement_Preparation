#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    int i=0,j=str.size()-1;
    for(int a=0;a<str.size();a++){
        if(str[i]==str[j]){
            ans= j-i+1;
            break;
        }else if(str[i]!=str[j]){
            i++;
            j--;
        }
    }
    cout<<ans<<endl;
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
