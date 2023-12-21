#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int n = row / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // To print spaces.
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) // To print stars.
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // To print spaces.
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // To print spaces.
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}