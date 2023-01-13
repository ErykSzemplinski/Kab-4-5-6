#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct uczen{
    int indeks;
    string imie;
    string nazwisko;
    bool operator<(const uczen& a) const{
        return indeks < a.indeks;
    }
};
int main(){
    int a;
    cout << "Liczba uczniow: " << endl;
    cin >> a;
    vector <uczen> tab(a);
    for (int i = 0; i < a; i++){
        cout << endl;
        cout << "Indeks ucznia " << i + 1 << ": ";
        cin >> tab[i].indeks;
        cout << "Imie ucznia " << i + 1 << ": ";
        cin >> tab[i].imie;
        cout << "Nazwisko ucznia " << i + 1 << ": ";
        cin >> tab[i].nazwisko;
    }
    cout << "Wektor przed sortowaniem: " << endl;
    for (int i = 0; i < a; i++){
        cout << tab[i].indeks << "  " << tab[i].imie << "  " << tab[i].nazwisko << endl;
    }
    sort(tab.begin(), tab.end());
    cout << "Wektor posortowany: " << endl;
    for (int i = 0; i < a; i++){
        cout << tab[i].indeks << "  " << tab[i].imie << "  " << tab[i].nazwisko << endl;
    }
    return 0;
}