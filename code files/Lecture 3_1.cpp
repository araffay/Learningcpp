#include <iostream>
using namespace std;

int main(){

    //this program swaps values of two variables
    int a;
    int b;
    int temp;

    cout << "Enter value of a :";
    cin >> a;
    cout << "Enter value of b :";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Value of a is :" << a << endl;
    cout << "Value of b is :" << b;

}
