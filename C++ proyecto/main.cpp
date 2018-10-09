#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void verificar_sudoku(int matriz1[9][9]) {
    //Verificar Bloques
    int verificar = 0;
    int X = 0;
    int contador1 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            contador1 = contador1 + matriz1[i][j];
        }
    }
    if (contador1 != 45) {
        X += 1;
    }

    int contador2 = 0;
    for (int i = 3; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            contador2 = contador2 + matriz1[i][j];
        }
    }
    if (contador2 != 45) {
        X += 1;
    }

    int contador3 = 0;
    for (int i = 6; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            contador3 = contador3 + matriz1[i][j];
        }
    }
    if (contador3 != 45) {
        X += 1;
    }

    int contador4 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j < 6; j++) {
            contador4 = contador4 + matriz1[i][j];
        }
    }
    if (contador4 != 45) {
        X += 1;
    }

    int contador5 = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 6; j < 9; j++) {
            contador5 = contador5 + matriz1[i][j];
        }
    }
    if (contador5 != 45) {
        X += 1;
    }

    int contador6 = 0;
    for (int i = 3; i < 6; i++) {
        for (int j = 3; j < 6; j++) {
            contador6 = contador6 + matriz1[i][j];
        }
    }
    if (contador6 != 45) {
        X += 1;
    }

    int contador7 = 0;
    for (int i = 6; i < 9; i++) {
        for (int j = 3; j < 6; j++) {
            contador7 = contador7 + matriz1[i][j];
        }
    }
    if (contador7 != 45) {
        X += 1;
    }

    int contador8 = 0;
    for (int i = 3; i < 6; i++) {
        for (int j = 6; j < 9; j++) {
            contador8 = contador8 + matriz1[i][j];
        }
    }
    if (contador8 != 45) {
        X += 1;
    }

    int contador9 = 0;
    for (int i = 6; i < 9; i++) {
        for (int j = 6; j < 9; j++) {
            contador9 = contador9 + matriz1[i][j];
        }
    }
    if (contador9 != 45) {
        X += 1;
    }

    if (X == 0) {
        cout << "Bloques Bien" << endl;
    } else {
        cout << "Bloques Mal" << endl;
        verificar += 1;
    }

    //Verificar verticales
    int contador = 0;
    for (int l = 0; l < 9; l++) {
        contador = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (j == l) { contador = contador + matriz1[i][j]; }
            }
        }
        if (contador != 45) {
            break;
        }
    }

    if (contador == 45) {
        cout << "Verticales Bien" << endl;
    } else {
        cout << "Verticales Mal" << endl;
        verificar += 1;
    }

    //Verificar horizontales
    int contadorH = 0;
    for (int l = 0; l < 9; l++) {
        contadorH = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (i == l) {
                    contadorH = contadorH + matriz1[i][j];
                }
            }
        }
        if (contadorH != 45) {
            break;
        }
    }
    if (contadorH == 45) {
        cout << "Horizontales Bien" << endl;
    } else {
        cout << "Horizontales Mal" << endl;
        verificar += 1;
    }

    //Verificar SUDOKU
    if (verificar == 0) {
        cout << "SUDOKU " << endl;
    } else {
        cout << "NO SUDOKU" << endl;

    }
}
int main(){
    cout<<endl;
    cout<<"SUDOKU RANDOM"<<endl;
    cout<<endl;
    int matrizR[9][9];
    srand(time(NULL));
    for(int i = 0; i < 9 ; i++){
        for(int j = 0; j < 9; j++){
            matrizR[i][j] = (rand()%9)+1;
        }
    }
    for(int i = 0; i < 9; i++){
        if (i==3 || i==6 || i==0){cout<<" --- --- --- --- --- --- --- --- ---"<<endl<<"| ";}
        else{cout<<"  -   -   -   -   -   -   -   -   - "<<endl<<"| ";}
        for(int j = 0; j < 9; j++){
            if (j==2 || j==5 || j==8){cout<< matrizR[i][j]<<" | ";}
            else {cout<< matrizR[i][j]<<" : ";}
        }cout<<endl;
    }
    cout<<" --- --- --- --- --- --- --- --- ---"<<endl<<endl;

    verificar_sudoku(matrizR);
    cout<<endl;

    cout<<"SUDOKU PERFECTO"<<endl;
    cout<<endl;

    int matriz[9][9] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {4, 5, 6, 7, 8, 9, 1, 2, 3}, {7, 8, 9, 1, 2, 3, 4, 5, 6},
                        {2, 3, 4, 5, 6, 7, 8, 9, 1}, {5, 6, 7, 8, 9, 1, 2, 3, 4}, {8, 9, 1, 2, 3, 4, 5, 6, 7},
                        {3, 4, 5, 6, 7, 8, 9, 1, 2}, {6, 7, 8, 9, 1, 2, 3, 4, 5}, {9, 1, 2, 3, 4, 5, 6, 7, 8}};

    for (int i = 0; i < 9; i++){
            if (i==3 || i==6 || i==0){
                cout<<" --- --- --- --- --- --- --- --- ---"<<endl<<"| ";
            }
            else{
                cout<<"  -   -   -   -   -   -   -   -   - "<<endl<<"| ";
            }
        for (int j = 0; j < 9; j++) {
            if (j==2 || j==5 || j==8){cout<<matriz[i][j]<<" | ";}
            else {cout<<matriz[i][j]<<" : ";}
        }cout<<endl;
    }
    cout<<" --- --- --- --- --- --- --- --- ---"<<endl<<endl;

    verificar_sudoku(matriz);

    return 0;}