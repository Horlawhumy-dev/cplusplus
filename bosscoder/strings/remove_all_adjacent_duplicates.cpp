#include <bits/stdc++.h> 
#include <map>
using namespace std;

string remove_all_adjacent_duplicates(string input)
{
    // Write your code here

    if (input.size() <= 1) {
        return input;
    }

    map<string,int> letters;


    for (int i = 0; i < input.size()-1; i++) {

        auto letter = letters.find(input[i]);
        int index = letter -> second;

        if (index > -1) {
            letters.erase(letter);
            input.erase(i, 1);
            input.erase(index, 1);
        }else {
            letters[input[i]]=i;
        }
        
    }

    return input;
}

int main()
{
    string str = "abbaca";
    string ans = remove_all_adjacent_duplicates(str);
    cout << ans << endl;
}