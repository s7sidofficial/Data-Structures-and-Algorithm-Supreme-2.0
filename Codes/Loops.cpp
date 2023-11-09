#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) // Table for 2
    {
        cout << 2 * i << endl;
    }
}

int main()
{
    for (int i = 10; i >= 0; i--) // Reverse Counting
    {
        cout << i << " ";
    }
}

int main()
{
    for (int i = 1; i <= 10; i++) // Forward Counting
    {
        cout << i << " ";
    }
}

int main()
{
    for (int i = 100; i > 1; i = i / 2)
    {
        cout << i << " ";
    }
}

int main()
{
    for (int i = 2; i <= 100; i = i + 1) // Print even number between 1 to 100
    {
        if (i % 2 == 0)
            cout << i << " ";
    }
}

// ****************************** NESTED LOOPS (Loop inside Loop ) **********************************

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Outer Loop " << i << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Inner Loop " << j << endl;
        }
    }
}
