#include <iostream>
using namespace std;
int main()
{
    int row = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++) // To print spaces.
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) // To print stars.
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/* This is the pattern we need to print where '-' are the spaces.

----*
---* *
--* * *
-* * * *
* * * * *

    */
