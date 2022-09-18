#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int x;
    cin >> x;
    while (x--)
    {
        int a;
        int y = 0;
        string b;

        cin >> a;
        cin >> b;

        for (int i = 0; i < a; i++)
        {

            if (b[i] != 'a' && b[i] != 'i' && b[i] != 'u' && b[i] != 'e' && b[i] != 'o')
            {
                y++;
                if (y >= 4)
                {
                    break;
                }
            }
            else
            {
                y = 0;
            }
        }
        if (y >= 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}