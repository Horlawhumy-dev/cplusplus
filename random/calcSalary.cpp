#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here

    // Collect the basic salary and grade

    int basicSalary, allow;
    float totalSalary;
    char grade;

    cin >> basicSalary;
    cin >> grade;

    //Calculate the hra, pf and da
    float hra = 0.2 * basicSalary;
    float da = 0.5 * basicSalary;
    float pf = 0.11 * basicSalary;

    //Get allow value

    switch (grade) {
        case 'A':
            allow = 1700;
            break;
        case 'B':
            allow = 1500;
            break;
        default:
            allow = 1300;
            break;
    }

    totalSalary = basicSalary + hra + da + allow -pf;
    totalSalary = round(totalSalary);

    cout << totalSalary;
    return 0;
}