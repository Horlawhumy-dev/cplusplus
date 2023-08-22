#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int fibonacciNumber(int n){
    // Write your code here.

    if (n <= 2) {
        return 1;
    }

    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main() {

    int value = fibonacciNumber(10);
    cout << value;
    return 0;
}