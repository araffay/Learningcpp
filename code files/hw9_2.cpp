#include <iostream>
using namespace std;

int main(){

    //this program outputs the LCM of two given Variables by user
    int a;
    int b;
    int i;
    int LCM = 1;

    cout << "Enter two Variables :" << endl;
    cin >> a >> b;
    int yo = a;
    int who = b;

    while(a != 1 || b != 1){
        for(i = 2; a%i != 0 && b%i != 0; i++){}
            if(a%i == 0){
                a = a/i;
            }
            if(b%i == 0){
                b = b/i;
            }
        LCM = LCM*i;
    }
    cout << "So LCM of " << yo << " and " << who << " is: " << LCM;

}















