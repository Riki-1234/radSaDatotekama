#include <fstream>
using namespace std;

int main() {
	ifstream ulaz;
	ulaz.open("ulaz.in");

	int n;
	ulaz >> n;

	int* niz = new int[n];
	for (int i = 0; i < n; i++) {
		ulaz >> *(niz + i);
	}
	ulaz.close();

	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma += *(niz + i);
	}

	ofstream izlaz;
	izlaz.open("izlaz.out");
	float prosjek = (float) suma / n;
	izlaz << "Nadprosjecne vrijednosti su: ";
	for (int i = 0; i < n; i++) {
		if (*(niz + i) > prosjek) {
			izlaz << *(niz + i);
		}
	}
	izlaz.close();
}
