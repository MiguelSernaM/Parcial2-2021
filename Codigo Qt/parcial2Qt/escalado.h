#ifndef ESCALADO_H
#define ESCALADO_H
#include <vector>
#include <iostream>
using namespace std;
class escalado
{
private:
    int ajustx,ajusty;
    int anchoLectura,altoLectura;
    int valex,valey;
    vector< vector< vector<int> > > vec3d2;
public:
    escalado(int,int);
    void asiggnVect(vector< vector< vector<int> > > vec3d);
    void escalameEsta();
    ~escalado();
};

#endif // ESCALADO_H
