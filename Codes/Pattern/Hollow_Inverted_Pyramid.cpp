#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++) // To print spaces.
        {
            cout << " ";
        }
        for (int j = 0; j < row - i; j++) // To print stars.
        {
            if (j == 0 || j == row - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}