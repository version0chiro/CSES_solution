#include<iostream>

using namespace std;

int main(){
    long long t;
    cin >>t;
    while(t){
        long long x,y;
        cin >>x >>y;
        if (x<y){
            long long z;
            z=y;
            if (z%2==0){
                long long r = (z-1)*(z-1)+1;
                cout << r +x -1<<endl;
            }
            else{
                long long r = (z)*(z);
                cout << r -x +1<<endl; 
            }
        }
        else{
            long long z;
            z = x;
            if (z%2==1){
                long long r = (z-1)*(z-1)+1;
                cout << r +y -1<<endl;
            }
            else{
                long long r = (z)*(z);
                cout << r -y +1<<endl; 
            }
        }

    t=t-1;
    }


    return 0;
}