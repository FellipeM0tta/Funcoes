#include <iostream>
using namespace std;

int inverterNumero(int x) {

int invertido = 0;

for (; x > 0; x = x / 10) {
int digito = x % 10;
invertido = invertido * 10 + digito;
}

return invertido;
}

int main() {
int numero;

cout << "Digite um número inteiro: ";
cin >> numero;

cout << "Número invertido: " << inverterNumero(numero) << endl;

return 0;
}
