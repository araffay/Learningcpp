#include <iostream>
using namespace std;

int main(){
    //this program solves simultaneous equations

    float a;
    float b;
    float c;
    float d;
    float x;
    float y;
    float m;
    float n;

    cout << "Enter Required Values of First Equation" << endl;
    cout << "Enter the co-efficient of x : ";
    cin >> a;
    cout << "Enter the co-efficient of y : ";
    cin >> b;
    cout << "Enter the value at it's left side : ";
    cin >> m;
    cout << endl;


    cout << "Enter Required Values of Second Equation" << endl;
    cout << "Enter the co-efficient of x : ";
    cin >> c;
    cout << "Enter the co-efficient of y : ";
    cin >> d;
    cout << "Enter the value at it's left side : ";
    cin >> n;


    x = (d*m - b*n)/(a*d - b*c);
    y = (a*n - c*m)/(a*d - b*c);


    cout << "So Value of x is : " << x <<endl;
    cout << "Value of y is : " << y;







}
