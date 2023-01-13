#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
    int tablica[10][10];
    int a = 10;
    int b = 10;
    for (int kolumna = 0; kolumna < a; kolumna++){
        for (int wiersz = 0; wiersz < a; wiersz++){
            if (kolumna == 0){
                tablica[kolumna][wiersz] = wiersz;
            }
            else if (kolumna == 1){
                tablica[kolumna][wiersz] = wiersz + wiersz;
            }
            else if (kolumna == 2){
                tablica[kolumna][wiersz] = wiersz * wiersz;
            }
            else if (kolumna == 3){
                tablica[kolumna][wiersz] = wiersz + kolumna;
            }
            else if (kolumna == 4){
                tablica[kolumna][wiersz] = wiersz - kolumna;
            }
            else{
                tablica[kolumna][wiersz] = 0;
            }
        }
    }
    for (int wiersz = 0; wiersz < a; wiersz++){
        for (int kolumna = 0; kolumna < a; kolumna++){
            cout << setw(4) << tablica[kolumna][wiersz];
        }
        cout << endl;
    }
    return 0;
}