#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    using std::cout, std::cin;

    double num1;
    double num2;
    double resultado;
    char operador;

    while (true) {
        cout << "Ingrese la operacion que desea realizar (+, -, *, /, ^, r, %, |)" << '\n';
        cin >> operador;

        if (operador == 'r') {
            cout << "Ingrese un numero" << '\n';
            cin >> num1;

            resultado = sqrt(num1);
            cout << "El resultado de la raiz cuadrada es: " << resultado << '\n';
            cout << '\n';
            continue;
        }

        else if (operador == '%') {
            cout << "Ingrese el porcentaje" << '\n';
            cin >> num1;

            cout << "Ingrese el numero" << '\n';
            cin >> num2;

            resultado = (num1 / 100) * num2;
            cout << "El " << num1 << "% de " << num2 << " es: " << resultado << '\n';
            continue;
        }

        else if (operador == '|') {
            cout << "Ingrese el numero al que desea hacerle el valor absoluto:" << '\n';
            cin >> num1;

            resultado = abs(num1);
            cout << "El valor absoluto de " << num1 << " es: " << resultado << '\n';
            continue;
        }

        else {
            cout << "Ingrese un numero" << '\n';
            cin >> num1;

            cout << "Ingrese otro numero" << '\n';
            cin >> num2;
        }

        if (num2 == 0 && operador == '/') {
            cout << "Has activado la autodestruccion, corra o su PC explotara" << '\n';
        }
        else {
            switch (operador) {
                case '+':
                    resultado = num1 + num2;
                    cout << "El resultado de la suma es: " << resultado << '\n';
                    break;

                case '-':
                    resultado = num1 - num2;
                    cout << "El resultado de la resta es: " << resultado << '\n';
                    break;

                case '*':
                    resultado = num1 * num2;
                    cout << "El resultado de la multiplicacion es: " << resultado << '\n';
                    break;

                case '/':
                    resultado = num1 / num2;
                    cout << "El resultado de la division es: " << resultado << '\n';
                    break;

                case '^':
                    resultado = pow(num1, num2);
                    cout << "El resultado de la potencia es: " << resultado << '\n';
                    break;

                default:
                    cout << "Por favor ingrese un operador valido (+, -, /, *, ^, r, %, |)" << '\n';
                    break;
            }

            cout << '\n';
        }
    }

    return 0;
}