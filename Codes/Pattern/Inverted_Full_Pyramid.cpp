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
        for (int j = 0; j < row - i; j++) // To print spaces.
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*  This is the pattern we need to print where '-' are5 the spaces.

* * * * *
-* * * *
--* * *
---* *
----*

*/