// buatlah perhitungan faktorial dengan menggunakan konsep rekursif
#include <iostream>
using namespace std;
int faktorial(int num)
{
    if (num > 1)
    {
        return num * faktorial(num - 1);
    }
    else
    {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    cout << faktorial(num);

    return 0;
}
