#include <iostream>
using namespace std;
int main(){
	int tablica[7][7], a, b;
	int i, j, k;
	cout << "Podaj liczbe wierszy, ktora nie moze byc wieksza niz 7: ";
	cin >> a;
	cout << "Podaj liczbe kolumn, ktora nie moze byc wieksza niz 7: ";
	cin >> b;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << "Podaj element " << i + 1 << " wiersza i " << j + 1 << " kolumny tablicy: ";
			cin >> tablica[i][j];
		}
	}
	cout << endl << "Tablica wejsciowa:" << endl;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b / 2; j++){
			k = tablica[i][j];
			tablica[i][j] = tablica[i][(b - 1) - j];
			tablica[i][(b - 1) - j] = k;
		}
	}
	cout << endl << "Tablica wyjsciowa:" << endl;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}