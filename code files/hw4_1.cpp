#include <iostream>
using namespace std;
int main(){

    //this program inputs two variables(a,b)and outputs that is a is divisible by b or not

    int a;
    int b;

    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;


    if(a % b == 0){
        cout << a << " is divisible by " << b << endl;
    }
    else{
        cout << a << " is not divisible by " << b << endl;
    }








}
