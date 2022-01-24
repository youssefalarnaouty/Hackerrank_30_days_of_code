#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printstring (string s){
    string even = "",odd = "";
    for(int i=0;i<s.length();i++){
        if(i%2 == 0){
            even+=s[i];
        }
        else{
            odd+=s[i];
        }
    }
    cout<< even << " "<< odd <<endl;
}


int main() {
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<string> s;
  //  vector<string> s2;
    int n;
    string temp;
    cin >>n;
    
    for(int i=0;i<n;i++){
        cin >> temp;
        s.push_back(temp);
    }

    for(int i=0;i<n;i++){
        printstring(s[i]);
    }
    
    
    return 0;
}
