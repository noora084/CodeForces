#include <iostream>
using namespace std ; 

int main(){
    string s ; int n ; 
    cin >> n>> s ; 
    int count=0 ; 
    for(int i =0 ; i < n ; i++){
        if(s[i]==s[i+1]){
            count++ ; 
        }
    }
    cout << count ; 
}