#include <iostream>
#include <cmath>
using namespace std;

float fun(float r)
{
    const float pi = 3.14;
    return 4.0 / 3 * pi * (pow(r, 3));
}

int main()
{
    float r1, r2, r3, z;
    cout << "r-all = ? \n";
    cin >> r1 >> r2 >> r3;
    z = (fun(r1) + fun(r2) + fun(r3)) / 3;
    cout << "r-all : \n" << z << endl;
    return 0;
}