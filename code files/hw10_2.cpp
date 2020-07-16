#include <iostream>
using namespace std;

int main(){
    //this program outputs LCM
    int a;
    int b;
    int LCM = 1;
    int i;

    cout << "Enter two Variables :";
    cout << endl;
    cin >> a;
    cin >> b;

    while( a!= 1 || b!= 1){
        for(i = 2; a%i != 0 && b%i != 0; i++){}
        if(a%i == 0){
            a = a/i;
        }
        if(b%i == 0){
            b = b/i;
        }


    LCM = LCM*i;


    }
    cout << "LCM is :" << " " << LCM;







}
