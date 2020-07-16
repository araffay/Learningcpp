#include <iostream>
using namespace std;

int main(){
    //this program inputs a variable and outputs it's table
    int n;
    int i = 1;

    cout << "Enter a number to print table :";
    cin >> n;

    while(i <= 10){
        cout << n << " X " << i << " = " << i*n << endl;
        i = i + 1;
    }
}
