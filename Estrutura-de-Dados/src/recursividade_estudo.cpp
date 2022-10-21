#include <iostream>

using namespace std;

void contador(int num, int cont = 0)
{

    if (num > cont)
    {
        cout << num << endl;
        return contador(num - 1);
    }
}

int main()
{
    contador(20);

    return 0;
}