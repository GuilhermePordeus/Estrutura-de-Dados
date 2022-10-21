#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct aluno
{
    string nome;
    double matricula;
    double nota1;
    double nota2;
    double nota3;
    double media;
};


int main(){
    aluno v[5];
    int i = 0;
    double media1, media2, media3, media4, media5;
    double aux;
    double media;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i].nome;
        cin >> v[i].matricula;
        cin >> v[i].nota1;
        cin >> v[i].nota2;
        cin >> v[i].nota3;
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        media1 = v[0].media = (v[0].nota1 + v[0].nota2 + v[0].nota3)/3;
        media2 = v[1].media = (v[1].nota1 + v[1].nota2 + v[1].nota3)/3;
        media3 = v[2].media = (v[2].nota1 + v[2].nota2 + v[2].nota3)/3;
        media4 = v[3].media = (v[3].nota1 + v[3].nota2 + v[3].nota3)/3;
        media5 = v[4].media = (v[4].nota1 + v[4].nota2 + v[4].nota3)/3;
        

    }

    if (media1 > media2 && media1 > media3 && media1 > media4 && media1 > media5)
    {
        cout << "Nome: " << v[0].nome << endl;
        cout << "Nota01 " << v[0].nota1 << endl;
        cout << "Nota02 " << v[0].nota2 << endl;
        cout << "Nota03 " << v[0].nota3 << endl;
    }
    if (media2 > media1 && media2 > media3 && media2 > media4 && media2 > media5)
    {
        cout << "Nome: " << v[1].nome << endl;
        cout << "Nota01 " << v[1].nota1 << endl;
        cout << "Nota02 " << v[1].nota2 << endl;
        cout << "Nota03 " << v[1].nota3 << endl;
    }
    if (media3 > media1 && media3 > media2 && media3 > media4 && media3 > media5)
    {
        cout << "Nome: " << v[2].nome << endl;
        cout << "Nota01 " << v[2].nota1 << endl;
        cout << "Nota02 " << v[2].nota2 << endl;
        cout << "Nota03 " << v[2].nota3 << endl;
    }
    if (media4 > media1 && media4 > media2 && media4 > media3 && media4 > media5)
    {
        cout << "Nome: " << v[3].nome << endl;
        cout << "Nota01 " << v[3].nota1 << endl;
        cout << "Nota02 " << v[3].nota2 << endl;
        cout << "Nota03 " << v[3].nota3 << endl;
    }
    if (media5 > media1 && media5 > media2 && media5 > media3 && media5 > media4)
    {
        cout << "Nome: " << v[4].nome << endl;
        cout << "Nota01 " << v[4].nota1 << endl;
        cout << "Nota02 " << v[4].nota2 << endl;
        cout << "Nota03 " << v[4].nota3 << endl;
    }
    
    return 0;
}