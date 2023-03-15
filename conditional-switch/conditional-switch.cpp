#include <iostream>

using namespace std;

int main(){
    int option = 0;
    cout << "Indique la opcion: ";
    cin >> option;

    switch(option){
        case 1:
            cout << "Opcion 1";
            break;
        case 2:
            cout << "Opcion 2";
            break;
        case 3:
            cout << "Opcion 3";
            break;
        default:
            cout << "Escogiste un valor que no existe";
    }
}