#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if(num < 2)
        return 0;
 
    for(int i=2;i<=(sqrt(num));i++){
        if((num%i) == 0)
        return 0;
    }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num,input;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> input;
        if(isPrime(input))
            cout<<"Prime"<<endl;
        else 
            cout<<"Not prime"<<endl;
    }
    return 0;
}
