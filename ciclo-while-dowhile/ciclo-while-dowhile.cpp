#include <iostream>

using namespace std;

int main()
{
    /*    for(int i = 0; i < 10000; i++){
            char respuesta;
            cout << "¿Deseas terminar?" << endl;
            cin >> respuesta;
            if(respuesta == 'y' || 'Y'){
                cout << "bye bye";
                break;
            }
        }*/
/*    while(true){
        char respuesta;
        cout << "¿Deseas terminar?" << endl;
        cin >> respuesta; 
        if(respuesta == 'y' || 'Y'){
            cout << "bye bye";
            break;
        }
    }
*/
    do {
        char respuesta;
        cout << "¿Deseas terminar?" << endl;
        cin >> respuesta; 
        if(respuesta == 'y' || 'Y'){
            cout << "bye bye";
            break;
        }
    } while(true);
}