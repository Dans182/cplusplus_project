#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    age = 28;
    char letra = 'A';
    cout << "Hola mundo " << age << endl;
    // endl es para hace un salto de linea. endl es de la librería iostream
    cout << letra << endl;

    const char letra2 = 'B';
    // acá declaramos una constante. valor de solo lectura, no modificable.

    int lista_edades[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    cout << letra2 << endl;
}
