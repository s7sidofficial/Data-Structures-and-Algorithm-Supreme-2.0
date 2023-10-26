#include <iostream>
#include <cmath>
using namespace std;

//*********************DECIMAL TO BINARY CONVERSION*********************************

//------------------------Using Division Method-----------------------------------
int divisionmethod(int n)
{
    int binary = 0;
    int i = 0;
    while (n > 0)
    {
        int bits = n % 2;
        // cout << bits << endl;  // This line will directly print the bits
        binary = bits * pow(10, i++) + binary; // to convert bits into integer
        n = n / 2;
    }
    return binary;
}

//----------------------Using Bitwise Method----------------------------------
int bitwisemethod(int n)
{
    int binary = 0;
    int i = 0;
    while (n > 0)
    {
        int bits = (n & 1);
        // cout << bits << endl; // This line will directly print the bits
        binary = bits * pow(10, i++) + binary; // to convert bits into integer
        n = n >> 1;
    }
    return binary;
}

//*********************BINARY TO DECIMAL CONVERSION*********************************

int method1(int n)
{
    int digits = 0;
    int i = 0;
    while (n)
    {
        int bits = n % 10;
        digits = bits * pow(2, i++) + digits; // to convert bits into integer
        n = n / 10;
    }
    return digits;
}

int main()
{
    int n;
    cin >> n;
    int binaryno = method1(n); // main function will always same you just need to change the name of methods here.
    cout << binaryno << endl;
    return 0;
}