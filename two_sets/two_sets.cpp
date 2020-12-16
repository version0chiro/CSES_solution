#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n;i++){
        sum += i+1;
    }
    if(sum%2==0){
        vector<long long> arr1,arr2;
        cout <<"YES" << endl;
        sum /=2;
        while(n){
            
            if (sum-n>=0){
                arr1.push_back(n);
                sum -=n;

            }
            else{
                arr2.push_back(n);
            }
            n--;
        }

        cout <<arr1.size() << endl;
        for (auto it = arr1.begin(); it != arr1.end(); it++) 
        cout << *it << " ";
        
        cout <<endl<<arr2.size()<< endl;
        for (auto it = arr2.begin(); it != arr2.end(); it++) 
        cout << *it << " ";
        
    }
        
    else{
        cout <<"NO" << endl;
    }
    return 0;
}