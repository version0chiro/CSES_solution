#include <iostream>

using namespace std;

int main(){
    long long tries;
    cin >> tries;
    while(tries--){
        long long a,b;
        cin>>a>>b;
        
        // if (2*a-b >=0 && ((2*a-b)%3==0) && 2*b-a>=0 && ((2*b-a)%3==0)){
        //    cout<<"YES"<<endl; 
        // }
        if(a<=2*b && b<=2*a && (a+b)%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}