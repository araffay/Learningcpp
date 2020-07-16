#include <iostream>
using namespace std;

int main(){
    //this program prints a table using for-loop
    int n;

    cout << "Enter a number to print table :";
    cin >> n;

    for(int i = 1; i <= 20; ++i ){
        cout << n << " X " << i << " = " << i*n << endl;
        if(n > 5 ){
            break;
        }

    }

}

// Fibonacci Numbers
// 1,1,2,3,5,8,13,21,34,55

//Exponential Growth
//1,2,4,8,16,32,128,256
//1.3.9.27.81.243.729
//1,1.5,2.25.3.375
