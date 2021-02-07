#include <bits/stdc++.h>

#define Loop(x) for(int i = 0; i <x;i++)
using namespace std;



int main(){
    int n;
    cin >> n;
    set<int> s;
    Loop(n){
        int p;
        cin >> p;
        s.insert(p);
    }
    cout << s.size() << endl;
   return 0;
}