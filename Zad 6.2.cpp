#include<iostream>
using namespace std;
struct uczen{
	char imie[12];
	int informatyka, matematyka, biologia, polski;
};
int main(){
	uczen tablica[6];
	for (int i = 0; i < 6; i++){
		cout << "Podaj imie ucznia numer " << i + 1 << ": ";
		cin >> tablica[i].imie;
		cout << "Podaj ocene z informatyki: ";
		cin >> tablica[i].informatyka;
		cout << "Podaj ocene z matematyki: ";
		cin >> tablica[i].matematyka;
		cout << "Podaj ocene z biologii: ";
		cin >> tablica[i].biologia;
		cout << "Podaj ocene z jezyka polskiego: ";
		cin >> tablica[i].polski;
	}
	int pytania;
	cout << "Ile chcesz zadac pytan? : ";
	cin >> pytania;
	int numer, przedmiot;

	while (pytania--){
		cout << "Podaj numer ucznia (1-6): ";
		cin >> numer;
		--numer;
		if ((numer < 0) || (numer >= 6)){
			cout << "W systemie brak ucznia o podanym numerze. Podaj cyfre od 1 do 6 " << endl;
			continue;
		}
		cout << "Podaj numer przedmiotu (0-informatyka; 1-matematyka; 2-biologia; 3-jezyk polski): ";
		cin >> przedmiot;
		if ((przedmiot < 0) || (przedmiot > 3)){
			cout << "W systemie brak przedmiotu o podanym numerze. Podaj cyfre od 0 do 3 " << endl;
			continue;
		}

		switch (przedmiot){
		case 0:
			cout << "Uczen: " << tablica[numer].imie << ", ocena z informatyki: "
				<< tablica[numer].informatyka << endl;
			break;
		case 1:
			cout << "Uczen: " << tablica[numer].imie << ", ocena z matematyki: "
				<< tablica[numer].matematyka << endl;
			break;
		case 2:
			cout << "Uczen: " << tablica[numer].imie << ", ocena z biologii: "
				<< tablica[numer].biologia << endl;
			break;
		case 3:
			cout << "Uczen: " << tablica[numer].imie << ", ocena z jezyka polskiego: "
				<< tablica[numer].polski << endl;
			break;
		}
	}
	return 0;
}