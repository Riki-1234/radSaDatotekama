#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream ulaz;
	ulaz.open("ulaz.in");

	string recenica;
	getline(ulaz, recenica);
	ulaz.close();

	string samoglasnici = "aeiouAEIOU";
	int brojac = 0;
	for (int i = 0; i < recenica.length(); i++) {
		for (int j = 0; j < samoglasnici.length(); j++) {
			if (recenica[i] == samoglasnici[j]) {
				brojac++;
			}
		}
	}

	ofstream izlaz;
	izlaz.open("izlaz.out");
	izlaz << "Broj samoglasnika: " << brojac;
	izlaz.close();
}
