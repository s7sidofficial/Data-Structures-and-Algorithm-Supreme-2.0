#include <iostream>
using namespace std;

// *************************************** If CONDITION ****************************************

int main()
{
    int side;
    cin >> side;
    if (side == 3)
    {
        cout << "Triangle";
    }
    cout << "Not a Triangle";
}

// ************************************** If-else CONDITION ************************************

int main()
{
    int balance;
    cin >> balance;
    if (balance >= 2000)
    {
        cout << "Minimum maintained";
    }
    else
    {
        cout << "Not maintained";
    }
}

// ************************************** If-else if CONDITION ************************************

int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "+ve Nummber";
    }
    else if (num < 0)
    {
        cout << "-ve Number";
    }
    else
    {
        cout << "Zero";
    }
}