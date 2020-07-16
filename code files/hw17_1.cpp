#include <iostream>
using namespace std;

int main(){
    //this program finds the sum of N multiples of n
    int n;
    int N;
    int sum = 0;

    cout << "Enter a and b : " << endl;
    cin >> N >> n;

    for(int i = 1; i <= N; i++){
        sum = sum + i*n;
    }
    cout << "The sum is " << sum << endl;









}
