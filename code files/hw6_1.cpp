#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //this program inputs three ordered pairs and shows the area of their triangle
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    float Area;
    float D1;
    float D2;
    float D3;
    float S;

    cout << "Enter the first Ordered Pair :" << endl;
    cout << "Enter x1 :";
    cin >> x1;
    cout << "Enter y1 :";
    cin >> y1;
    cout << endl;

    cout << "Enter the second Ordered Pair :" << endl;
    cout << "Enter x2 :";
    cin >> x2;
    cout << "Enter y2 :";
    cin >> y2;
    cout << endl;

    cout << "Enter the third Ordered Pair :" << endl;
    cout << "Enter x3 :";
    cin >> x3;
    cout << "Enter y3 :";
    cin >> y3;
    cout << endl;

    D1 = sqrt((pow(x2 - x1,2)) + (pow(y2 - y1,2)));
    D2 = sqrt((pow(x3 - x2,2)) + (pow(y3 - y2,2)));
    D3 = sqrt((pow(x3 - x1,2)) + (pow(y3 - y1,2)));

    S = (D1 + D2 + D3)/2;

    Area = sqrt(S*(S-D1)*(S-D2)*(S-D3));

    cout << "So Area is :" << Area << endl;
}
