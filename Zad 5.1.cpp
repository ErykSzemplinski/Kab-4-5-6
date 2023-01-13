#include <vector>
#include <iostream>
using namespace std;
int main(){
    int n;
    int max = 0;
    cout << "Podaj liczbe elementow wektora: ";
    cin >> n;
    vector <int> ns(n);
    for (int i = 0; i < n; i++){
        cout << "Podaj " << i + 1 << " element wektora: ";
        cin >> ns[i];
        if (ns[i] > ns[max]){
            max = i;
        }
    }
    cout << endl << "Wartosc elementu maksymalnego wektora wynosi: " << ns[max] << endl;
    cout << "Numer indeksu elementu maksymalnego wektora: " << max << endl << endl;
    return 0;
}