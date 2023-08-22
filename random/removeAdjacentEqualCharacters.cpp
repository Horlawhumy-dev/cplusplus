#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    // Write your code here

    if (input.size() <= 1) {
        return input;
    }


    for (int i = 0; i < input.size()-1; i++) {
        int j = i+1;

        while (input[j] == input[i]) {

            input.erase(j, 1);
            
            if (input.size() <= 1) {
                break;
            }
        }
        
    }

    return input;
}

int main()
{
    string str = "abbaca";
    // cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}