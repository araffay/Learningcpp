#include <iostream>
using namespace std;
int main(){

    //this program inputs three values and outputs the smallest one

    float a;
    float b;
    float c;

    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter c :";
    cin >> c;


    if(a < b){
        if(a < c){
            cout << a << " is the smallest." << endl;
        }
        else{
            cout << c << " is the smallest." << endl;
        }
    }

    else{
        if(b < c){
            cout << b << " is the smallest." << endl;
        }
        else{
            cout << c << " is the smallest.";
        }
    }









}
