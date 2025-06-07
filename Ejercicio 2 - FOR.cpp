#include <iostream>

using namespace std;

int main () {

    int alturaMaxima;
    int alturaMinima = 1;

    cout << "Por favor digite la altura que va a tener su piramide: ";
    cin >> alturaMaxima;

    for (int i = 1; i <= alturaMaxima; i++) {
        cout << i << " " << endl << alturaMinima;
    }

    return 0;
}

// quiero que se le reste a la altura maxima el numero anterior, seguido de un endl