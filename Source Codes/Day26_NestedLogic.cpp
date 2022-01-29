#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ret_day,ret_month,ret_year;
    int due_day,due_month,due_year;
    
    cin >> ret_day >> ret_month >> ret_year;
    cin >> due_day >> due_month >> due_year;
    
    if((ret_year<due_year))
        cout << 0;
    else if((ret_month<due_month) && (ret_year==due_year))
        cout << 0;
        
    else if((ret_day <= due_day) && (ret_month<=due_month) && (ret_year<=due_year))
        cout << 0;
        
    else if((ret_day > due_day) && (ret_month==due_month) && (ret_year==due_year))
        cout << 15*(ret_day - due_day);
        
    else if((ret_month>due_month) && (ret_year<=due_year))
        cout << 500*(ret_month - due_month);
        
    else if((ret_year>due_year))
        cout << 10000;
    return 0;
}
