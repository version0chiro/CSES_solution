#include <bits/stdc++.h>

using namespace std;

int main(){
// count the number of times an elements is in array
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;
    int x=4;
    auto a = lower_bound(array, array+n, x);
    auto b = upper_bound(array, array+n, x);
    cout << b-a << "\n";

    return 0;
}