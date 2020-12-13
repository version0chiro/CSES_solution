#include <iostream>
#include <string>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string str="";
    if(n<=3 && n>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    
    for (int i=1; i<=n;i++){
        if (i%2==0){
            cout<<i<<" ";
        }
        else
        {
            str += to_string(i)+" ";

        }
        

    }

    cout<<str;
    return 0;
}