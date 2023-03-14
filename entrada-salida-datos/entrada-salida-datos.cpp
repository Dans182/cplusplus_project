#include <iostream>

using namespace std;

//Librería iostream para entrada y salida de datos
//Esta nos permitirá realizar el manejo de entrada y salida de datos
//por medio de streams (flujo de datos que van moviendose como flujo de información)
//Nos da la capacidad de stremear datos a través de nuestra terminal de comando
//"<<" es un operador para c++ que acá iostream lo utiliza como una forma de entrar datos para la terminal


int main(){
    cout << "Hola mundo!" << endl;
    //Toma cada letra y mandalos hacia la salida de la terminal de comandos

    int edad = 0;
    cout << "Introduce tu edad: " << endl;

    cin >> edad;
    //El cin es un input.

    cout << "Tu edad es: " << edad;


    //Para correr el código y poder interactuar con el lo mejor es
    //correrlo usando F6
}