#include <iostream>
using namespace std;

int main(){
    //this program outputs HCF by Division Method
    int a;
    int b;
    int cuphead; // for storing remainder
    int mugman;  // for swap work


    cout << "Enter two Variables :" << endl;
    cin >> a >> b;
    int yo = a;
    int who = b;

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

    cout << "HCF of " << yo << " and " << who << " is: " << b;
}
