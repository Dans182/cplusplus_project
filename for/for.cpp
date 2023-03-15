#include <iostream>

using namespace std;

int main()
{
    int list[] = {100, 200, 300, 400, 500};
    int limit = sizeof(list) / sizeof(list[0]);
    // La linea inmediatamente superior es una forma de hacer un "list.length" de JS
    cout << "Limite ";
    // cin >> limit;
    for (int i = 0; i < limit; i += 1)
    {
        cout << i << " " << list[i] << endl;
    }

    // con sizeof obtenemos el tamaño en bites de una variable
}