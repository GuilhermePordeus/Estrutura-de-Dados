#include <iostream>

using namespace std;

int comp(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return comp(y, x % y);
    }
}

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    cout << comp(x, y) << endl;

    return 0;
}