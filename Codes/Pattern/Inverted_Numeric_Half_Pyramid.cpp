#include <iostream>
using namespace std;
int main()
{
    int row = 5;
    for (int i = 0; i < row; i++) // Iteration for the rows.
    {
        for (int j = 0; j < row - i; j++) // Iteration for the column.
        {
            cout << j + 1 << " "; // Print the number in the column.
        }
        cout << endl;
    }
}