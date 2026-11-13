#include <iostream>

using namespace std;

int main(){
	// wczytujemy do tablicy 3 wartości z klawiatury i maks wyświetlanej
	int tab[3];
	int max;
	for (int i = 0; i < 3; i++) {
		cout << "podaj wartość nr:" << i+1 << endl;
		cin >> tab[i];
		if (i == 0 || tab[i] > max) {
			max = tab[i];
		}
	}
	cout << tab[0] << " " << tab[1] << " " << tab[2] << " " << max << endl;
	return 0;
}
