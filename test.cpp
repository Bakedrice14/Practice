#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int pangkat, div, num, inc = 0, terminated, length = 5;
    for (int i = 0; i < 5; i++)
    {
        pangkat = 10 * length; // membuat 10 pangkat berapa untuk membagi angka
        div = num / pangkat;   // membagi bilangan dengan variabel pangkat
        terminated = div * pangkat;
        num -= terminated;
        length--;
        if (div == 4) // mencari apakah angka pada bilangan tertentu merupakan angka 4
        {
            inc++;
            cout << inc << endl;
        }
    }
    cout << inc << endl;
    return 0;
}
