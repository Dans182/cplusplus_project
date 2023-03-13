#include <iostream>

using namespace std;

int main(){
    int age = 18;
    age = 28;
    char letra = 'A';
    cout << "Hola mundo " << age << endl;
    // endl es para hace un salto de linea. endl es de la librería iostream
    cout << letra << endl;

    const char letra2 = 'B';
    // acá declaramos una constante. valor de solo lectura, no modificable.

    int lista_edades[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    //aca no podrías combinar varios tipos de datos en una lista. Ejm
    //Char + int. Tienen que ser todos del mismo tipo de dato.
    cout << letra2 << endl;
    cout << lista_edades << endl;
    cout << lista_edades[2] << endl;
    lista_edades[2] = 18;
    //así modificas el valor de un elemento dentro de una lista
    cout << lista_edades[2] << endl;

}
