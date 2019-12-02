#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    int num1, num2;

    cout << "Seja bem-vindo a nossa primeira calculadora" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;

    cout << "Digite o segundo numero: " << endl;
    cin >> num2;
    cout << endl;

    cout << "A soma eh: " << num1 + num2 << endl;
    cout << "A subtracao eh: " << num1 - num2 << endl;
    cout << "A multiplicacao eh: " << num1 * num2 << endl;
    cout << "A divisao eh: " << num1 / num2 << endl;
    cout << endl;

    system("pause");
    return 0;
}
