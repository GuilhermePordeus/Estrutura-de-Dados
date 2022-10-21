#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct pontos
{
    double Q;
    double P;
};

void dist(double x2, double y2){
    double x1 = 0;
    double y1 = 0;
    double distancia;
    distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << fixed << setprecision(2) << "A distancia é:" << distancia << endl;

}

int main(){
    pontos x2, y2;
    cin >> x2.Q;
    cin >> y2.Q;

    dist(x2.Q,y2.Q);


    
    

    //cout << fixed << setprecision(4) << resultado << endl;
    
    
    
    
    
    //cout << "ola mundo" << endl;



    return 0;
}