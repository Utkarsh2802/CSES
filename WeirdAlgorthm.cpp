#include <iostream>
using namespace std;

int main()
{

    long input;
    cin >> input;

    while (input > 1)
    {
        cout << input << " ";
        if (input % 2 == 0)
        {
            input /= 2;
        }
        else
        {
            input = input * 3 + 1;
        }
    }

    cout << 1;
}