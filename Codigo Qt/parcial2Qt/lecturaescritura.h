#ifndef LECTURAESCRITURA_H
#define LECTURAESCRITURA_H
#include <QImage>
#include <QTextStream>
#include <QString>
#include <QFile>
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
    void escribirTxt();
    vector< vector< vector<int> > > getVectorSinEscalar();
    ~lecturaEscritura();
};

#endif // LECTURAESCRITURA_H
