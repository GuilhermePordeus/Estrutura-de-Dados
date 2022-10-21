#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct carteziano
{

    float ponto_x; // valor de x
    float ponto_y; // valor de y
};
struct ret
{

    retangulo pont_superior; 
    retangulo pont_inferior; 
};
void retangulo(ret a, float superiorx, float superiory, float inferiorx, float inferiory){

    float aux1, aux2;
    aux1 = superiorx;
    superiorx = inferiorx;
    inferiorx = aux1;
     
    aux2 = superiory;
    superiory = inferiory;
    inferiory = aux2;

    float distancia_A;

    float distancia_B;

    distancia_A = a.pont_inferior.ponto_x - a.pont_superior.ponto_x ;

    distancia_B = a.pont_superior.ponto_y - a.pont_inferior.ponto_y ;

    float area = distancia_A * distancia_B;

    float diagonal = sqrt(pow(distancia_B,2)+ pow(distancia_A,2));

    float perimetro = 2*(distancia_A+distancia_B);


    cout << " Área do Retângulo: " << fixed << setprecision(2) << area << endl ;
    cout << "Diagonal do Retângulo: " <<fixed << setprecision(2) << diagonal << endl;
    cout << "Perímetro do Retângulo: " <<fixed << setprecision(2) << perimetro << endl ;

}

int main(){

    ret a;

    cin >> a.pont_superior.ponto_x ;
    cin >> a.pont_superior.ponto_y ;
    cin >> a.pont_inferior.ponto_x ;
    cin >> a.pont_inferior.ponto_y ;


retangulo(a, a.pont_superior.ponto_x, a.pont_superior.ponto_y, a.pont_inferior.ponto_x, a.pont_inferior.ponto_y);

}




