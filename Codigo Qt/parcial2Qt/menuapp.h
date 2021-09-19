#ifndef MENUAPP_H
#define MENUAPP_H
#include "lecturaescritura.h"
#include <iostream>
#include <QString>

using namespace std;
class menuapp
{
private:
    QString nameFile;
    lecturaEscritura *elEscritor;

public:
    menuapp();
    void ingresarNombreImg();
    ~menuapp();


};

#endif // MENUAPP_H
