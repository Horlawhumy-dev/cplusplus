#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main() {
    //Write your code here

    int n;

    // cout << "Input n: ";
    cin >> n;

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        // cout << "Input the value for index " << i;
        cin >> arr[i];
    }

    int i = 0;

    int j = n-1;

    while (i < j) {
        swap(arr, i, j);
        i++;
        j--;
    }

    for (int i: arr) {
        cout << i << " ";

    }

    // free(arr);
    // delete [] arr;
    // arr=nullptr;
    return 0;
}