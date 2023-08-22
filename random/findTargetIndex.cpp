#include <iostream>
using namespace std;


int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    //Write your code here

    int n, target;

    cout << "Input n: ";
    cin >> n;

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Input the value for index " << i;
        cin >>arr[i];
    }

    cout << "Input target: ";
    cin >> target;

    int index = findIndex(arr, n, target);

    cout << index;

    return 0;
}