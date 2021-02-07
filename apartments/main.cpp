#include <bits/stdc++.h>

#define FOR(x) for(long long i=0;i<x;i++)
#define FOR2(x) for(long long j=0;j<x;j++)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,k,papr=0,papp=0,t,working=0;
    vector<long> apr,app;
    cin >> n >> m >> k;
    FOR(n){
        cin >>t;
        apr.push_back(t);
    }
    FOR2(m){
        cin >>t;
        app.push_back(t);
    }
    sort(apr.begin(),apr.end());
    sort(app.begin(),app.end());
    while(papp<m && papr<n){
        if(abs(apr[papr]-app[papp])<=k){
            working++;
            papp++;
            papr++;
        }
        else if(apr[papr]<app[papp]){
            papr++;
        }
        else{
            papp++;
        }
    }

    cout <<working;
   return 0;
}