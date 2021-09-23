#ifndef MENUAPP_H
#define MENUAPP_H
#include "lecturaescritura.h"
#include <iostream>
#include <QString>
#include "escalado.h"
#include <string.h>

using namespace std;
class menuapp
{
private:
    string nameFile;
    lecturaEscritura *elEscritor;
    escalado *elEscalador;

public:
    menuapp();
    void ingresarNombreImg();
    ~menuapp();


};

#endif // MENUAPP_H
