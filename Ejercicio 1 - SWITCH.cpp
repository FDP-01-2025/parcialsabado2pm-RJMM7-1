#include <iostream>

using namespace std;


int main () {

    // Se crea la variable que almacenara la opcion de color
    int color;

    // Se le presentan los colores disponibles al usuario
    cout << "Colores disponibles:" << endl;
    cout << "1. Rojo." << endl;
    cout << "2. Verde." << endl;
    cout << "3. Azul." << endl;
    cout << "Por favor seleccione un color: ";
    cin >> color;
    cout << "=================================" << endl;


    // Se crea el switch con el parametro de color
    switch (color) {

        // Se crean 3 casos, cada uno para las diferentes opciones de color
        case 1:
            cout << "Haz seleccionado rojo." << endl;
            cout << "Significado emocional: Es un color que refleja enojo, molestia, pero a su vez, dominancia." << endl;
            cout << "=================================" << endl;
            break;

        case 2:
            cout << "Haz seleccionado verde." << endl;
            cout << "Significado emocional: Es un color que refleja sabiduria, inteligencia." << endl;
            cout << "=================================" << endl;
            break;

        case 3:
            cout << "Haz seleccionado azul." << endl;
            cout << "Significado emocional: Es un color que refleja soledad, calma." << endl;
            cout << "=================================" << endl;
            break;

        // Se crea el default por si el usuario digita una opcion que no esta comprendida en la cinta de opciones disponible
        default:
            cout << "No esta en las opciones disponibles";
            break;
    }

    // Fin del programa
    return 0;
}