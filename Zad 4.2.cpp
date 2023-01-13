#include <iostream>
using namespace std;
int main(){
    int* element;
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;
    element = new int[n];
    for (int i = 0; i < n; i++){
        cout << "Podaj " << i + 1 << " element tablicy: ";
        cin >> element[i];
    }
    int max_liczba = 0;
    int max_czestotliwosc;
    for (int i = 0; i < n; i++){
        int liczba = 0;
        for (int j = 0; j < n; j++){
            if (element[i] == element[j]){
                liczba++;
            }
        }
        if (liczba > max_liczba){
            max_liczba = liczba;
            max_czestotliwosc = element[i];
        }
    }
    cout << endl << "Najczesciej wpisywany element tablicy to: " << max_czestotliwosc << endl;
    return 0;
}