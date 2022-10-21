#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)

        cin >> A[i];

    int cont = 0;
    int trocar = 1;

    while (trocar)
    {
        trocar = 0;
        cont++;
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                trocar = 1;
            }
        }
    }

    cout << cont << endl;
}