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

	int min = *niz;
	for (int i = 0; i < n; i++) {
		if (min > *(niz + i)) {
			min = *(niz + i);
		}
	}
	ofstream izlaz;
	izlaz.open("izlaz.out");
	
	izlaz << "Najmanji broj u nizu je: " << min;
	izlaz.close();
}
