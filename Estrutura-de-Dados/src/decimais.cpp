#include <iostream>
#include <cstring>

using namespace std;

int deci(int v[], int tam)
{
    if (tam == 0)
        return 0;
    else
        return v[tam - 1] + deci(v, tam - 1);
}

int main()
{
    int tam = 2;
    int vet[tam];

    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
    }
    int result = deci(vet, tam);

    cout << result << endl;

    return 0;
}