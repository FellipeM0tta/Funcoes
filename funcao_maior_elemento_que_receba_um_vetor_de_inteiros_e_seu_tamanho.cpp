#include <iostream>
using namespace std;

int maiorElemento(int vetor[], int tamanho) {
    int maior = vetor[0]; 
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int n;
    cout << "Quantos elementos o vetor terá? ";
    cin >> n;

    int vetor[n];
    for (int i = 0; i < n; i++) {
        cout << "Digite o elemento " << i+1 << ": ";
        cin >> vetor[i];
    }

    cout << "O maior elemento do vetor é: " << maiorElemento(vetor, n) << endl;

    return 0;
}

