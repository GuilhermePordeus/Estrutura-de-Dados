#include <iostream>
#include <math.h>

using namespace std;

int raizes(float A,float B,float C,float * X1,float * X2){
    float delta, raizDelta;
    int nraiz;

    delta = (B*B) - (4*A*C);
    raizDelta = sqrt(delta);

    if (delta < 0){
        cout << "Não existe raízes." << endl;
        return nraiz = 0;
    }

    if (delta == 0){
        nraiz = 1;
    }

    if (delta > 0){
        nraiz = 2;
    }

    *X1 = ((-1 * B) + raizDelta)/(2*A);
    *X2 = ((-1 * B) - raizDelta)/(2*A);

    return nraiz;
    }

    int main(void) {
    float a, b , c, x1, x2;
    int quantReais;

    cin >> a;
    cin >> b;
    cin >> c;

    quantReais = raizes(a,b,c,&x1,&x2);

    if (quantReais == 2)
    {
        cout << quantReais << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else
    {
        cout << quantReais << endl;
        cout << "x1 = " << x1 << endl;
    }
    
    return 0;
}