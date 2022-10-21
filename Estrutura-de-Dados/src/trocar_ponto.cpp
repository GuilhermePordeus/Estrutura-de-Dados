#include <iostream>
#include <iomanip>

using namespace std;

struct carteziano
{
    float ponto_x;
    float ponto_y;
};
    struct reatngulo
    {
    carteziano a ;
    carteziano b ;
    };

void troca(reatngulo p )
{
float aux,aux2,aux3,aux4;
float trocax,trocay ;
    aux = p.a.ponto_x ; 
    aux2 = p.a.ponto_y ; 
    aux3 = p.b.ponto_x ; 
    aux4 = p.b.ponto_y ; 
    trocax = aux;
    aux = aux3;
    aux3 = trocax;
    trocay = aux2;
    aux2 = aux4; 
    aux4 = trocay ;
    
    cout << fixed << setprecision(1) << aux << "-" << aux2 << endl; ;
    
    cout << aux3 << "-" << aux4;

}

int main()
{
reatngulo p;

cin >> p.a.ponto_x;
cin >> p.a.ponto_y;
cin >> p.b.ponto_x;
cin >> p.b.ponto_y;


troca(p);
}
