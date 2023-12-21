#include <iostream>
using namespace std;
int main()
{
    int row = 4;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 1) // We cannot use  j%2==0 because it will print * for col0 also.
            {
                cout << "* ";
            }
            else
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
}
/*
Pattern to print
1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4

*/