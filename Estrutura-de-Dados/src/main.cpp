#include <iostream>
#include <math.h>

using namespace std;

int raizes(float a,float b,float c, float* x1,float* x2);

int main(){

float a,b,c,x1,x2;
cout << "digite os valores" << endl  ;
cin >> a >> b >> c ;
raizes(a,b,c,&x1,&x2);
    return 0;
}

int raizes(float a,float b,float c, float* x1,float* x2){
int delta;
delta = (b*b)-4*a*c;

int r;
int divisor = 2*a;

    if( delta < 0){
        cout << "raiz inexistente";
    }
    else if( delta == 0){
        r = (-b + sqrt(delta));
        *x1 = r/divisor;
        cout << "1" << endl;
        cout << "x1= " << *x1 << endl;
    }
    else {
        *x1 = (-b + sqrt( delta ))/2*a;
        *x2 = (-b - sqrt( delta ))/2*a;
        cout << "2" << endl;
        cout << "x1= " << *x1 << endl ;
        cout << "x2= " << *x2 << endl ;
    }
    return 0;
}