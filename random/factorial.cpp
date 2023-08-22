#include <iostream>
using namespace std;

 int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }

        return n * findFactorial(n-1);
}

int main() {
    //Write your code here
    int n;

    cin >> n;

    if ( n <= 1) {
        cout << 1;
        return 0;
    }

    int value = findFactorial(n);

    cout << value;
    return 0;
}

