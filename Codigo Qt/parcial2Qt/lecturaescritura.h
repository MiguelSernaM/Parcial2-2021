#ifndef LECTURAESCRITURA_H
#define LECTURAESCRITURA_H
#include <QImage>
#include <fstream>
#include <QString>
#include <iostream>
#include <vector>
using namespace std;
class lecturaEscritura
{
private:
    QImage *imagenFuente;
    QString direction;
    int ancho, alto, color;

public:
    lecturaEscritura(QString nombre);
    void escribirTxt(vector< vector< vector<int> > > vec3D);
    ~lecturaEscritura();
    int getAncho() const;
    int getAlto() const;
    QImage *getImagenFuente() const;
};

#endif // LECTURAESCRITURA_H
