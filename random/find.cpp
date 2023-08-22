#include <bits/stdc++.h>

using namespace std;


int find(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    // vector<int> larger;
    // vector<int> lower;

    // if(a.size() > b.size()) {
    //     larger = a;
    //     lower = b;
    // }else {
    //     larger = b;
    //     lower = a;
    // }

    long unsigned i = 0;
    long unsigned j = 0;

    int result = 0;

    while (i <= a.size()-1 && j <= b.size()-1) {
        if (a[i] == b[j]) {
            result++;
        }

        i += 1;
        j += 1;
    }


    if (i == a.size()) {
        i -= 1;
    }

    if (j == b.size()) {
        j -= 1;
    }

    while (i < a.size()) {
        if (a[i] == b[j]) {
            result++;
        }

        i++;
    }

    while (j < b.size()) {
        if (a[i] == b[j]) {
            result++;
        }

        j++;
    }

    return result;
};


int main() {

    vector<int> a = { 5, 2, 8, 4}; //2, 3, 5, 9
    vector<int> b = {3, 9, 5}; //2, 4, 5, 8, 9

    int result = find(a, b);
    cout << result << "\n";
    return 0;
}