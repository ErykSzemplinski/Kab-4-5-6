#include <iostream>
using namespace std;
int main(){
    int* element;
    int n;
    int max = 0;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;
    element = new int[n];
    for (int i = 0; i < n; i++){
        cout << "Podaj " << i + 1 << " element tablicy ";
        cin >> element[i];

        if (max < element[i]){
            max = element[i];
        }
    }
    cout << "Najwiekszy element tablicy " << max;
    return 0;
}