#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    while (n == 0)
    {
        switch (n)
        {
        case 1:
            cout << "It's 1";
            exit(1);
            // break;

        case 2:
            cout << "It's 2";
            exit(1);
            // break;

        default:
            cout << "It's default";
            exit(0);
            // break;
        }
    }
}