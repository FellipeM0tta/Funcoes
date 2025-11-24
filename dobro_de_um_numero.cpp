 #include <iostream>
using namespace std;

int dobro(int a, int b){
    return a * b;
}

int main(){
    int a, b;
    
    cout << "Digite o primeiro número: ";
    cin >> a;
    
    cout << "Digite o segundo número: ";
    cin >> b;
    
    int resultado = dobro(a, b);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
