#include <iostream>
#include <cstring>

using namespace std;

int deci(int num, int num2)
{

    if (num2 == 0)
        return 0;
    else
    {
        int aux = deci(num, num2 - 1);

        return aux + num;
    }
}

int main()
{

    int num;
    int num2;

    cin >> num;
    cin >> num2;

    int result = deci(num, num2);
    cout << result << endl;

    return 0;
}