#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here

    int i = 0;

    while (i <  input.size()) {
        char ch = input[i];

        if (ch == c) {
            input.erase(i, 1);
        }else {
            i++;
        }
    }

    return input;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}