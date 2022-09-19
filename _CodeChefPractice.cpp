#include <iostream>
using namespace std;
int intLength(int number)
{
    int length = 0, num = number;
    while (num)
    {
        num /= 10;
        length++;
    }
    return length;
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, terminated, div, length = intLength(x);
        cin >> x;
        int num = x;
        int num2 = x;
        int inc = 0;

        for (int i = 0; i < intLength(x); i++)
        {
            int pangkat = 10 * length; // membuat 10 pangkat berapa untuk membagi angka
            div = num / pangkat;       // membagi bilangan dengan variabel pangkat
            if (div == 4)              // mencari apakah angka pada bilangan tertentu merupakan angka 4
            {
                inc++;
                cout << inc << endl;
            }
            terminated = div * pangkat;
            num2 -= terminated;
            length--;
        }
    }
    return 0;
}
