#include <iostream>

using namespace std;

int *bubblesort(int A[], int n)
{
    int *indices = new int[n];
    for (int i = 0; i < n; i++)
    {
        indices[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        bool trocou = false;
        for (int j = n - 1; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                int aux = A[j];
                A[j] = A[j - 1];
                A[j - 1] = aux;

                int aux2 = indices[j];
                indices[j] = indices[j - 1];
                indices[j - 1] = aux2;
                trocou = true;
            }
        }
        if (!trocou)
            break;
    }
    return indices;
}

int main()
{

    int n;
    cin >> n;
    int const num = n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int *indices = bubblesort(A, n);

    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            cout << indices[i] << " ";
        }
        else
        {
            cout << indices[i] << endl;
        }
    }

    delete[] indices;

    return 0;
}