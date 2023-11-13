#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++) // Outer loop for row printing.
    {
        for (int j = 0; j < 5; j++) // Inner loop for column printing.
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}