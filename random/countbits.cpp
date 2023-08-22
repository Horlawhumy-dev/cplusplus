#include <bits/stdc++.h> 
#include <iostream>

using namespace std;


// with loop
int countBits(int n) {
    int count = 0;
    while (n > 0) {
        int remainder = n % 2;
        
        if (remainder == 1) {
            count++;
        }

        n /= 2;
    }

    return count;
}

// with recursion

int countBits(int n, int count) {

    if (n == 0) {
        return count;
    }

    if ( n % 2 == 1) {
        count++;
    }

    return countBits(n/=2, count);
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n, 0);
    return 0;
}