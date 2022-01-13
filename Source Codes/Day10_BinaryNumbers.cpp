#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int consec_ones(int n){
    int counter =0,c2=0;
    for(int i=0;i<31;i++){
        if(n & (1<<i)){
            counter++;
        }
        else {
            if(counter >= c2){
                c2 = counter;
            }
            counter =0;
        }
    }
    return c2;
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
        
    cout<<consec_ones(n);
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
