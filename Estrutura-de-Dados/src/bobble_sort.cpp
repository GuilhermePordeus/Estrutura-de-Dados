#include <iostream>

using namespace std;

void bobble(int v[], int n)
{
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bobble(v, n);

    return 0;
}