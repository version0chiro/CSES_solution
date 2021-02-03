#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    map<char,string> m;

    string sequence;
    cin>>sequence;
    for(char c:sequence){
        if(m.count(c)){
            m[c] +=c;
            
        }else{
            m[c] = c;
        }
    };

    string fir="",las="", odd = "";

    for(auto c: m){
        if(c.second.length()%2==1 && odd!=""){
            cout<<"NO SOLUTION";
            return 0;
        }else if(c.second.length()%2==1) {
            odd = c.second;
        }else{
            fir = c.second.substr(0,c.second.length()/2) + fir;
            las +=  c.second.substr(0,c.second.length()/2);
        }

    
    }
    cout<<fir+odd+las;
    return 0;
}