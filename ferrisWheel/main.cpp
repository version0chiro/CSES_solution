#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,count=0,t;
    cin >> n >> x;
    vector<int> weight;
    n--;
    for(int i=0; i<=n;i++){
        cin>>t;
        weight.push_back(t);
    }
    sort(weight.begin(),weight.end());
    for(int i=0; i<n;i++){
        cout<<weight[i];
    }

    while(n>0){
        cout<<"========================="<<endl;
        cout<<"Differnece between "<< weight[n]<<" "<<weight[n-1]<<endl;
        cout<<"is=="<<abs(weight[n]+weight[n-1])<<"should be less than"<<x<<endl;
        if(abs(weight[n]+weight[n-1])<=x){
            cout<<endl<<"going here";
            count++;
            n=n-2;
        }else{
            count++;
            n--;
        }
    }
    cout<<endl<<count<<endl;
    
}