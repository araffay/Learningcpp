#include <iostream>
using namespace std;

int main(){

    //this program inputs three values and outputs the greatest one

    int a;
    int b;
    int c;

    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter c :";
    cin >> c;

    if(a > b){
        if(a > c){
            cout << a << " is the greatest." << endl;
            }
        else{
            cout << c << " is the greatest." << endl;
        }
    }
    else{
        if(b > c){
            cout << b << " is the greatest." << endl;
        }
        else{
            cout << c << " is the greatest." << endl;
        }
    }







}
