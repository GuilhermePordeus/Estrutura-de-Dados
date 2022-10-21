#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


using namespace std;

void maiusculo(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = toupper(str1[i]);
        i++;
    }
    str2[i] = '\0';
}

int main(){
    char str1[100];
    char str2[100];

    //cin.ignore();
    cin.getline(str1,100);
    //cin >> str1;

    maiusculo(str1, str2);

    cout << str2 << endl;

    return 0;
}