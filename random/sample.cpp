#include <bits/stdc++.h>
#include <fstream>
#include <string>
#include <utility>
using namespace std;


class Car {
    int gear;
    string color;


    public:

        Car(int gear, string color) {
            this -> gear = gear;
            this -> color = std::move(color);
        }

        void printCarInfo() {
            cout << "Gear: " << this -> gear << " " << "Color: " << this -> color <<  endl; 
        }
};

class RaceCar: public Car {

    int maxSpeed;

    public:

        RaceCar(int gear, string color, int maxSpeed): Car(gear, color) {
            this -> maxSpeed = maxSpeed;
        }


        void printRaceCarInfo() {
            Car::printCarInfo();
            cout << "Max Speed: " << this -> maxSpeed << endl;
        }
};


long long findMaxSubArray(vector<int>& arr) {
    /*

        #Kadane's Algorithm#
        Given an array of integers,  find the maximum subarray sum of the given array.
        T(n) = O(n)
        Space Complexity = O(i)
    */

    long long maxSub = 0ll;
    long long sum = 0ll;

    for (long long value: arr) {
        // either this or 
        // sum = max(value, sum+value);
        sum = sum + value;
        maxSub = max(maxSub, sum);

        // this => no need of tracking negative sum value.
        if (sum < 0) {
            sum = 0;
        }
    }


   return maxSub;
};


void addElem(vector<int> &concat, vector<int> &arr) {
    for (int val: arr) {
        concat.push_back(val);
    }
}

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	// Write your code here.
    int len = n*k;

    vector<int> concat = {0 * len};

    for(int i = 0; i<k; i++) {
        addElem(concat, arr);
    }

    long long maxSum = findMaxSubArray(concat);

    return maxSum;
}


int main() {
    // vector<int> arr = {-17, -278, -38, -4, -5, -67};

    // long long maxSum = maxSubSumKConcat(arr, 6, 7);

    // cout << maxSum << "\n";

    int maxSumRect = 0;

    vector<vector<int>> arr = {{1, 2}, {0, 2, 1}, {1, 3, 1}};

	for (int i = 0; i < arr.size(); i++) {
		// vector<int> inner =;

		int sumVal = accumulate( arr[i].begin(),  arr[i].end(), 0);
		maxSumRect = max(maxSumRect, sumVal);
	}

    cout << maxSumRect << endl;
    return 0;
}