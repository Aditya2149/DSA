#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter amount: ";
    cin >> n;

    while (n != 0)
    {
        switch (100)
        {
        case 100:
            cout << "100 notes: " << n / 100 << endl;
            n = n - ((n/100)*100);
        case 50:
            cout << "50 notes: " << n / 50 << endl;
            n = n - ((n/50)*50);
        case 20:
            cout << "20 notes: " << n / 20 << endl;
            n = n - ((n/20)*20);
        case 10:
            cout << "10 notes: " << n / 10 << endl;
            n = n - ((n/10)*10);
        case 1:
            cout << "1 notes: " << n / 1 << endl;
            n = n - ((n/1)*1);
            // default:
            //     break;
        }
    }
}