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

	int max = *niz;
	for (int i = 0; i < n; i++) {
		if (max < *(niz + i)) {
			max = *(niz + i);
		}
	}
	ofstream izlaz;
	izlaz.open("izlaz.out");
	
	izlaz << "Najveci broj u nizu je: " << max;
	izlaz.close();
}
