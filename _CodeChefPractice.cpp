#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        string y;
        cin >> y;

        int z;
        int a = 0;
        z = y.length();

        for (int i = 0; i <= z; i++)
        {

            if (y[i] == '4')
            {
                a++;
            }
        }

        cout << a << endl;
    }
}
