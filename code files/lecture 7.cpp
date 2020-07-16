#include <iostream>
using namespace std;

int main(){
    //this program outputs LCM
    int a;
    int b;
    int i;
    int LCM = 1;

    cout << "Enter a and b :";
    cin >> a >> b;

    // || == OR
    // && == AND

    while(a != 1 || b != 1 ){
        for( i = 2; a%i != 0 && b%i != 0; i++ ){}


    if(a%i == 0){
        a = a/i;
    }
    if(b%i == 0){
        b = b/i;
    }
    LCM = LCM*i;
    }

    cout << "So LCM is :";
    cout << LCM;

}
