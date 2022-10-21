#include <iostream>

using namespace std;

void mdc(int num, int cont = 1)
{
    /* cout << num << endl; */
    if (num >= cont)
    {
        if (cont % 2 == 0)
        {
            cout << cont << " ";
        }

        mdc(num, ++cont);
    }
    else
    {
        return;
    }
}

int main()
{
    int n;
    cin >> n;

    mdc(n);

    return 0;
}