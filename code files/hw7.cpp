#include <iostream>
using namespace std;

int main(){
	// this program finds the HCF of two numbers by division method
	int a; //first number
	int b; //second number
	int c; //used to store remainders
	int temp; //temporary integer used to swap a and b

	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;

	// this if makes sure that a > b
	if (a < b){
		// if a < b, this is not what we want, swap a and b
		temp = a;
		a = b;
		b = temp;
		}
	// Now, I am sure that a>b.

	// The division method divides the bigger number by the smaller and
	// then divides the divisor by the remainder
	// this process repeats until the remainder is zero.
	while (a%b != 0){ // condition a%b!=0 means that the loop will run until
		// the remainder of a/b is zero. (in which case b would be the answer)
		c = a%b; //store the remainder.
		//now, we have to make the remainder(c) the divisor (b)
		//and, the divisor(b) the dividend(a)
		a = b;
		b = c;
	}
	// at the end of the while loop, the b would be the HCF, always
	cout << "HCF is " << b << endl;
}
