#include <iostream>
using namespace std;

bool ehPar(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (ehPar(numero)) {
        cout << numero << " é par.\n";
    } else {
        cout << numero << " é ímpar.\n";
    }

    return 0;
}

