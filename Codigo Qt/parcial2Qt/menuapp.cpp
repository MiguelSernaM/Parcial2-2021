#include "menuapp.h"

menuapp::menuapp()
{
    ingresarNombreImg();
    elEscritor = new lecturaEscritura(nameFile);
}

void menuapp::ingresarNombreImg()
{
    cout << "------------------------------------------" << endl;
    cout << "+-+-+-+-+-+  BIENVENID@  +-+-+-+-+-+-+-+-+" << endl;
    cout << "Por favor ingrese el nombre de la imagen  " << endl;
    cout << "con su formato. Ejemplo: lolita.jpg" << endl;
    cout << "su respuesta:  ";
    char temp;
    cin >> temp;
    nameFile = temp;
}

menuapp::~menuapp()
{
    delete elEscritor;
}
