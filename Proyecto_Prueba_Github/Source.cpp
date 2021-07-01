# include <iostream>;
# include <string>;
# include <cctype>;
using namespace std;


void convert(string& VAL_CONVERT) {

	VAL_CONVERT[0] = toupper(VAL_CONVERT[0]);




}

int main() {

	string VAL_IN;
	cout << " Ingrese el caracter\n";
	cout << "\n";
	cin >> VAL_IN;
	convert(VAL_IN);
	cout << "\n";

	if (VAL_IN == "A") {
		cout << " EL caracter ingresado si es un vocal\n ";
		cout << " Caracter ingresado :" << VAL_IN;

	}
	else {
		if (VAL_IN == "E") {
			cout << " EL caracter ingresado si es un vocal\n ";
			cout << " Caracter ingresado :" << VAL_IN;

		}
		else {
			if (VAL_IN == "I") {
				cout << " EL caracter ingresado si es un vocal\n ";
				cout << " Caracter ingresado :" << VAL_IN;

			}
			else {
				if (VAL_IN == "0") {
					cout << " EL caracter ingresado si es un vocal\n ";
					cout << " Caracter ingresado :" << VAL_IN;

				}
				else {
					if (VAL_IN == "U") {
						cout << " EL caracter ingresado si es un vocal\n ";
						cout << " Caracter ingresado :" << VAL_IN;

					}
					else {
						cout << " EL caracter ingresado no es un vocal\n ";
						cout << "El caracter ingresado es :" << VAL_IN;
					}
				}
			}
		}
	}












	system("PAUSE");
}