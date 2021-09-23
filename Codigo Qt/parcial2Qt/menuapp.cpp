#include "menuapp.h"

menuapp::menuapp()
{
    ingresarNombreImg();
    elEscritor = new lecturaEscritura(nameFile.c_str());
    elEscalador = new escalado(elEscritor->getAncho(),elEscritor->getAlto());
    elEscalador->asignarImagen(elEscritor->getImagenFuente());
    elEscalador->escalameEsta();
    elEscritor->escribirTxt(elEscalador->getVectorScall());
}

void menuapp::ingresarNombreImg()
{
    cout << "------------------------------------------" << endl;
    cout << "+-+-+-+-+-+  BIENVENID@  +-+-+-+-+-+-+-+-+" << endl;
    cout << "Por favor ingrese el nombre de la imagen  " << endl;
    cout << "con su formato. Ejemplo: lolita.jpg" << endl;
    cout << "su respuesta:  ";
    cin >> nameFile;
}

menuapp::~menuapp()
{
    delete elEscritor;
    delete elEscalador;
}
