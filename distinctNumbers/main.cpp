#include <bits/stdc++.h>

#define Loop(x) for(int i = 0; i <x;i++)
using namespace std;



int main(){
    int n;
    cin >> n;
    int arr[n];
    Loop(n){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int count = 0;
    Loop(n){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout <<"\n"<<count;
    return 0;
}