#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n-1;i++){
        cin>>array[i];
    }
    int sum = 0;
    int Rsum = 0;
    for(int i=0; i<n+1;i++){
        if (i<n-1){
            sum=sum+array[i];
        }
        Rsum=Rsum+i;
    }
    cout<<Rsum-sum;

}