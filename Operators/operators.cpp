#include <iostream>
using namespace std;


int main(){
    int a = 2;
    int b = 3;
    int c = a * b;
    cout << a + b << endl;
    cout << a - b << endl; 
    cout << a / b<< endl; 
    cout << c << endl;

    bool d = a < b;
    cout << d;
    //En lenguajes de bajo nivel, cuando trabajas con bools, el verdadero te lo responde
    //en binario, indicandote "true = 1"  y false = 0
    bool e = a > b;
    cout << e;
}