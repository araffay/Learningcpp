#include <iostream>
using namespace std;

int LCM(int a, int b){

    int i;
    int lcm = 1;

    while( a!= 1 || b!= 1){
        for( i = 2; a%i != 0 && b%i != 0; i++){}
            if( a%i == 0 ){
                a = a/i;
            }
            if( b%i == 0 ){
                b = b/i;
            }

    lcm = lcm*i;

    }

    return lcm;
}

int HCF(int a, int b){

    int r;
    int temp;

    if( a < b ){
        temp = a;
        a = b;
        b = temp;
    }

    while( a%b != 0 ){

        r = a%b;

        a = b;
        b = r;

    }

    return b;





}



int main(){
    //this program finds the Sum of two fractions using LCM

    int a; // numerator of first fraction
    int b; // denominator of first fraction
    int c; // numerator of second fraction
    int d; // denominator of second fraction
    int x; // numerator of final fraction
    int y; // denominator of final fraction
    int hcf = 1;
    int lcm = 1;

    cout << "Enter the first Fraction " << endl;
    cout << " Enter the numerator : ";
    cin >> a;
    cout << " Enter the denominator : ";
    cin >> b;
    cout << endl;

    cout << "Enter the second fraction " << endl;
    cout << " Enter the numerator : ";
    cin >> c;
    cout << " Enter the denominator : ";
    cin >> d;

    hcf = HCF(a , b);
    a = a/hcf;
    b = b/hcf;

    hcf = HCF(c , d);
    c = c/hcf;
    d = d/hcf;

    x = a*d + b*c;
    y = b*d;


    hcf = HCF(x , y);
    x = x/hcf;
    y = y/hcf;


    cout << "Sum is " << x << "/" << y << endl;




}
