#ifndef ESCALADO_H
#define ESCALADO_H
#include <vector>
#include <iostream>
using namespace std;
class escalado
{
private:
    int anchoLectura,altoLectura;
    int valex,valey;
    vector< vector< vector<int> > > vec3d2;
public:
    escalado(int,int);
    void asiggnVect(vector< vector< vector<int> > > vec3d);
    void sobremuestrear(int signox, int signoy);
    void submuestrar(int signox,int signoy);
    void detectDiference();
    ~escalado();
};

#endif // ESCALADO_H
