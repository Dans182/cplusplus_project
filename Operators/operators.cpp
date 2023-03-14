#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    int c = a * b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a / b << endl;
    cout << c << endl;

    bool d = a < b;
    cout << d << endl;
    // En lenguajes de bajo nivel, cuando trabajas con bools, el verdadero te lo responde
    // en binario, indicandote "true = 1"  y false = 0
    bool e = a > b;
    cout << e << endl;

    a += 1;
    cout << a << endl;

    cout << sizeof(a) << endl;
    // este operador me indica el tamaño en bites de un valor, de un dato.

    int edades[] = {24, 40, 7};
    cout << sizeof(edades) << endl;
    cout << sizeof(edades) / sizeof(edades[0]);


}