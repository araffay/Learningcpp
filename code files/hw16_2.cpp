#include <iostream>
using namespace std;

int main(){
    //this program finds that the year is leap or not

    int a;

    cout << "Enter the Year : ";
    cin >> a;

    if( a%4 == 0 && a%100 == 0 && a%400 == 0){
        cout << "The Year is a LEAP Year.";
    }

    else{
        cout << "The Year is NOT a Leap Year." << endl;
    }





}

