#include <iostream>
using namespace std;

int main() {
	float kn_eur = 0.13;
	float eur_kn = 7.54;
	float kn_huf = 53.62;
	float huf_kn = 0.019;
	int odabir;
	float unos;
	float iznos;
	char dane;
	int i = 0;
	do {
		unos:
		cout << "MJENJACNICA\n\n";
		cout << "1. KN => EUR\n2. EUR => KN\n3. KN => HUF\n4. HUF => KN\n";
		cin >> odabir;
		cout << "\n";
		switch (odabir) {
		case 1:
			cout << "Mijenjanje kuna u eure\n\nTecaj konverzije: 0.13\n\n";
			cout << "Upisite iznos u kunama:\n";
			cin >> unos;
			iznos = unos * 0.13;
			cout << "Iznos za isplatu: \n" << iznos << " eur\n\n";
			break;
		case 2:
			cout << "Mijenjanje eura u kune\n\nTecaj konverzije: 7.54\n\n";
			cout << "Uspisite iznos u eurima:\n";
			cin >> unos;
			cout << "\n";
			iznos = unos * 7.54;
			cout << "Iznos za isplatu: \n" << iznos << " kn\n\n";
			break;
		case 3:
			cout << "Mijenjanje kuna u forinte\n\nTecaj konverzije: 53.62\n\n";
			cout << "Upisite iznos u kunama:\n";
			cin >> unos;
			iznos = unos * 53.62;
			cout << "Iznos za isplatu: \n" << iznos << " huf\n\n";
			break;
		case 4:
			cout << "Mijenjanje forinti u kune\n\nTecaj konverzije: 0.019\n\n";
			cout << "Uspisite iznos u forintama:\n";
			cin >> unos;
			cout << "\n";
			iznos = unos * 0.019;
			cout << "Iznos za isplatu: \n" << iznos << " kn\n\n";
			break;
		}
		cout << "Zelite li obaviti jos jednu konverziju?(d/n)\n\n";
		cin >> dane;
		if ((dane == 'n')||(dane == 'N')) {
			i++;
		}
		else {
			system("CLS");
			goto unos;
		}
	} while (i == 0);
}