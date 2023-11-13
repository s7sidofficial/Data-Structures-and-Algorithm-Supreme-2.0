#include <iostream>
using namespace std;
int main()
{
    int row = 5;
    for (int i = 0; i < row; i++) // Itertion for row
    {
        for (int j = 0; j < i + 1; j++) // Iteration for column
        {
            cout << j + 1 << " "; // Print number in the column
        }
        cout << endl;
    }
}