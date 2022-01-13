#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
        int input;
        double in2;
        string in3;
            
    // Read and save an integer, double, and String to your variables.
    cin >> input;
    cin >> in2;
    cin.ignore();
    getline (cin, in3);
 
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << input + i<<endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision(1) << fixed <<  double(d + in2) << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string s2 = s + in3;
    cout << s2;
    return 0;