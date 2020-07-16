#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

        //this program inputs a number and outputs if it is divisible by 3 or not
    float n;
    int q;

    cout << "Enter a number :";
    cin >> n;

    q = n/3;

    if(round(3*q) == n){
        cout << n << " is divisible by 3." << endl;
    }
    else{
        cout << n << " is not divisible by 3.";
    }
}
