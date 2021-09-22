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
    vector< vector< vector<int> > > vec3d;

public:
    lecturaEscritura(QString nombre);
    void escribirDatos();
    void pruebaxd();
    void escribirTxt(vector< vector< vector<int> > > vec3D);
    vector< vector< vector<int> > > getVectorSinEscalar();
    ~lecturaEscritura();
    int getAncho() const;
    int getAlto() const;
    QImage *getImagenFuente() const;
};

#endif // LECTURAESCRITURA_H
