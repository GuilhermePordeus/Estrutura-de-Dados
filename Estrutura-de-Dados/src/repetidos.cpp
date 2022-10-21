#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void verifica(vector<int> &vetor)
{

    vector<int> aux = vetor;
    int n = vetor.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[i] == vetor[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
}
int main()
{

    int n;
    cin >> n;
    vector<int> vetor;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vetor.push_back(num);
    }

    verifica(vetor);

    cout << "\n";

    return 0;
}