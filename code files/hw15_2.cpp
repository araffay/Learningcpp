#include <iostream>
#include "hcf and lcm.cpp"
using namespace std;

int main(){
    //this program finds the sum of three fractions

    int a; //numerator of first fraction
    int b; //denominator of first fraction
    int c; //numerator of second fraction
    int d; //denominator of second fraction
    int h; //numerator of third fraction
    int w; //denominator of third fraction
    int x; //numerator of Required fraction
    int y; //denominator of Required fraction
    int lcm;
    int hcf;


    cout << "Enter the First Fraction " << endl;
    cout << "Enter the Numerator : ";
    cin >> a;
    cout << "Enter the Denominator : ";
    cin >> b;

    cout << endl;

    cout << "Enter the Second Fraction " << endl;
    cout << "Enter the Numerator : ";
    cin >> c;
    cout << "Enter the Denominator : ";
    cin >> d;

    cout << endl;

    cout << "Enter the Third Fraction " << endl;
    cout << "Enter the Numerator : ";
    cin >> h;
    cout << "Enter the Denominator : ";
    cin >> w;

    //reducing a/b;
    hcf = HCF(a , b);
    a = a/hcf;
    b = b/hcf;

    //reducing c/d
    hcf = HCF(c , d);
    c = c/hcf;
    d = d/hcf;

    //reducing h/w
    hcf = HCF(h ,w);
    h = h/hcf;
    w = w/hcf;


    y = LCM3(b , d ,w);
    x = a*(y/b) + c*(y/d) + h*(y/w);

    //reducing x/y
    hcf = HCF(x, y);
    x = x/hcf;
    y = y/hcf;


    cout << "The sum is : " << x << "/" << y << endl;




}
