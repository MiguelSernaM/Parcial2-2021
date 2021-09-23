#ifndef ESCALADO_H
#define ESCALADO_H
#include <vector>
#include <iostream>
#include <QImage>
using namespace std;
class escalado
{
private:
    QImage *imagenaEscalar;
    int anchoLectura,altoLectura;
    int valex,valey;
    vector< vector< vector<int> > > vec3d2;
public:
    escalado(int,int);
    void escalameEsta();
    void asignarImagen(QImage *imagen);
    vector < vector < vector<int> >> getVectorScall();
    ~escalado();
};

#endif // ESCALADO_H
