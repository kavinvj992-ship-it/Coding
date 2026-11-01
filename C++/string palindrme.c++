#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s; 
    cout<<"Enter a string: ";
    cin >> s;
    string r = s;
    cout<<reverse(r.begin(), r.end());
    cout << (s == r ? "Palindrome" : "Not Palindrome");
}