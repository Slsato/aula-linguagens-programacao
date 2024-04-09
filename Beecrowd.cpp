#include <iostream>
using namespace std;
int main() {
    string sobrenome, nome;
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite seu sobrenome: " << endl;
    cin >> sobrenome;
    int tamanho = nome.length() - 1;
    std::cout << sobrenome << ", " << nome[0] << ", " << nome[tamanho] << std::endl;
    return 0;
}

