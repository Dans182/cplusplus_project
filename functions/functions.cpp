#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int multiplicacion(int a, int b)
{
    return a * b;
}

int multiplicacion2(int a, int b = 200)
{
    return a * b;
}


int main()
{
    cout << suma(2, 3) << endl;
    cout << multiplicacion(2, 3) << " " << multiplicacion2(2);

}