#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
    string sequence;
    // cout<<"Enter sequence"<<endl;
    getline(std::cin, sequence);
    int RepLength=0;
    int maxRep=0;
    if(sequence.size()==1){
        maxRep=1;
    }
    else{
    for(int i=0;i<sequence.size()-1;i++){
        

        if (sequence[i]==sequence[i+1]){
            // cout<<sequence[i]<<endl;
            RepLength=RepLength+1;
        }
        
        
        else{
            if(RepLength+1>maxRep){
                maxRep=RepLength+1;
            }
            RepLength=0;
        }
        if (i==sequence.size()-2){
            if(RepLength+1>maxRep){
                maxRep=RepLength+1;
            }
            RepLength=0;
        }



    }
    }
    // for(int i=0; i<arr.size(); ++i)
    //     cout << arr[i] << ' ';
    // max=*max_element(arr.begin(), arr.end());
    cout<<maxRep<<endl;
    // cout<<sequence<<endl;
    return 0;
}