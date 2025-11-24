#include <iostream>
using namespace std;


int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    cout << "O maior número é: " << maior(num1, num2) << endl;
    
    return 0;
}
