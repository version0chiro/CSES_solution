#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    long long count = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            // cout << count <<endl;
            count=count+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i+1]+arr[i]-arr[i+1];
        //     while(arr[i]>arr[i+1]){
        //         count=count+1;
        //         // cout<<"array="<<arr[i]<<endl;
        //         // cout<<"array2="<<arr[i+1]<<endl;
        //         arr[i+1] = arr[i+1]+1;
        //         if(arr[i]<arr[i+1])
        //             break;
                
        // } 
    }
    }
    
    cout<<count;
    return 0;

}