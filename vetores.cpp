#include <iostream>
#include <string>  // Para usar a classe string
using namespace std;

int main() {
    string palavra;
    int cont_vogais = 0;

    // Solicita que o usuário insira uma palavra
    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Converte a palavra para minúscula para facilitar a verificação
    for (int i = 0; i < palavra.length(); i++) {
        char letra = tolower(palavra[i]);

        // Verifica se a letra atual é uma vogal (a, e, i, o, u)
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cont_vogais++;  // Incrementa o contador se for uma vogal
        }
    }

    // Exibe o número total de vogais
    cout << "A palavra contém " << cont_vogais << " vogais." << endl;

    return 0;
}