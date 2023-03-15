#include <iostream>

using namespace std;
int main()
{

    bool resultado = true & true;
    cout << resultado << endl;
    // "&&" o "and" evalua si los dos lados son verdaderos, devuelve true
    // si los dos son falsos, devuelve falso. Y si alguno de los dos es verdadero,
    // devolverá falso.

    bool resultado2 = true || true;
    cout << resultado2 << endl;
    // "||" o "or" evalua si los dos lados son verdaderos, devuelve true
    // si los dos son falsos, devuelve falso. Y si alguno de los dos es verdadero,
    // devolverá verdadero.

    bool resultado3 = !true;
    cout << resultado3 << endl;
    // "!" o "not" invierte el valor lógico que indicaramos a continuación de la exclamación.

    int edad = 0;
    cout << "Tu edad es: ";
    cin >> edad;

    /*    if (edad >= 18){
            if (edad <= 40){
                cout << "Puedes votar.";
            } else {
                cout << "No puedes votar.";
            }
            cout << "Puedes votar.";
        }
        else {
            cout << "No puedes votar.";
        }
    */

    if (edad < 18) {
        cout << "No puedes votar.";
    } else if (edad > 40) {
        cout << "No puedes votar.";
    } else {
        cout << "Puedes votar.";
    }
}