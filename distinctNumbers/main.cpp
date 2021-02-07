#include <bits/stdc++.h>

#define Loop(x) for(int i = 0; i <x;i++)
using namespace std;



int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int, int> count;
    Loop(n){
        cin >> arr[i];
        if(count[arr[i]]==arr[i]){
            count[arr[i]]++;            
        }
        else{
            count[arr[i]] = arr[i];
        }

    }
    
    cout<<count.size()<<"\n";
    // sort(arr,arr+n);
    // int count = 0;3
    // Loop(n){
    //     if(arr[i]!=arr[i+1]){
    //         count++;
    //     }
    // }
    // cout <<"\n"<<count;
    return 0;
}