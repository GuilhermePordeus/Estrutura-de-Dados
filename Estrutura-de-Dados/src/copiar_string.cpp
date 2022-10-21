#include <iostream>
#include <cstring>

using namespace std;

char *strcpy(char *dest, char *orig)
{
    int i;

    for(i=0 ; i < strlen(orig) ; i++){
        dest[i] = orig[i];
    }
        

    dest[i]='\0';

    return dest; 
}

int main(){
    char origem[100];
    char destino[100];
    //cin.get(origem, 100);
    cin.getline(origem,100);
    strcpy(destino, origem);

    cout << destino << endl;


    //return 0;
}