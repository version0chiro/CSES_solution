#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> greyCode(int x){
    if(x==0) return {"0"};
    else if(x==1) return {"0","1"};
    
    vector<string> greyCodeArr= greyCode(x-1);
    vector<string> mainArr;
    for(int i=0;i<greyCodeArr.size();i++) {
        mainArr.push_back("0"+greyCodeArr[i]);

    }
    for(int i=greyCodeArr.size()-1;i>0;i--){
        mainArr.push_back("1"+greyCodeArr[i]);
    }

    return mainArr;

}

void greyCodeArray(int x){
    vector<string> arr;
    arr = greyCode(x);
    for(auto p:arr){
        cout<<p<<endl;
    }
}

int main(){
    int x;
    cin>>x;
    greyCodeArray(x);
    return 0;
}