#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Ingrese el orden de la matriz cuadrada:";
    cin>>n;

    int matriz[n][n];
    cout<<"Ingrese los elementos que componen a la matriz en orden de izquierda a derecha y por filas:";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++ ){
            cin>>matriz [i][j];
        }
    }

    int s = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            s = s + matriz[i][j];
        }
    }

    cout<<"La suma de los elementos sobre la diagonal principal es:"<<s<<endl;
    return 0;
}
