#include <iostream>
using namespace std;

double media_tres(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main() {
    double x, y, z;

    cout << "Digite o primeiro numero: ";
    cin >> x;

    cout << "Digite o segundo numero: ";
    cin >> y;

    cout << "Digite o terceiro numero: ";
    cin >> z;

    double media = media_tres(x, y, z);

    cout << "A media é: " << media << endl;

    return 0;
}
