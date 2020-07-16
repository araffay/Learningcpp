#include <iostream>
using namespace std;

int LCM(int a, int b){

    int i;
    int lcm = 1;

    while(a != 1 || b != 1){
        for( i = 2; a%i != 0 && b%i != 0; i++ ){}
        if(a%i == 0){
            a = a/i;
        }
        if(b%i == 0){
            b = b/i;
        }
        lcm = lcm*i;

    }

    return lcm;
}

int HCF(int a, int b){

    int cuphead; // for storing remainder
    int mugman;  // for swap work

    //making sure that a is greater than b
    if(a < b){
        mugman = a;
        a = b;
        b = mugman;

    }
    //starting main work
    while(a%b != 0){

        cuphead = a%b;

        a = b;
        b = cuphead;

    }
    return b;




}



int main(){
    //this program finds the sum of two fractions
    int a;  // a/b is the first fraction
    int b;
    int c;  // c/d is the second fraction
    int d;
    int x;  // x/y is the answer fraction
    int y;
    int lcm = 1;
    int hcf = 1;

    cout << "Enter the first Fraction " << endl;
    cout << "Enter Numerator : ";
    cin >> a;
    cout << "Enter the denominator : ";
    cin >> b;
    cout << endl;

    cout << "Enter the second Fraction " << endl;
    cout << "Enter the numerator : ";
    cin >> c;
    cout << "Enter the denominator : ";
    cin >> d;

    //reducing a/b
    hcf = HCF(a, b);
    a = a/hcf;
    b = b/hcf;

    //reducing c/d
    hcf = HCF(c, d);
    c = c/hcf;
    d = d/hcf;

    x = a*d + b*c;
    y = b*d;

    //reducing x/y
    hcf = HCF(x, y);
    x = x/hcf;
    y = y/hcf;

    y = LCM(b ,d);
    x = a*(y/b) + c*(y/d);

    //reducing x/y;
    hcf = HCF(x, y);
    x = x/hcf;
    y = y/hcf;


    cout << " The Answer is " << x << "/" << y << endl;

}
