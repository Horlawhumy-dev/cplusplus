#include <iostream>

using namespace std;


int main() {

    string str;

    cout << "Enter random string: ";

    getline(cin, str);

    cout << "You entered: " << str << endl;

    int count[26] = {0};
    int max = 0;
    char result;

    for(int i =0; i < str.length(); i++) {
        count[str[i] - 'a']++;
    }

    for (int i=0; i < 26; i++) {
        if (count[i] > max) {
            max = i;
            // result.append(('a'+i), result.size());
            result = ('a'+i);
        }
    }

    cout << "Maximum character(s) from " << str << " is/are: " << result << endl;
    return 0;
}