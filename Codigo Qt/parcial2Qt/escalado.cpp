#include "escalado.h"

escalado::escalado(int valxlec, int valylec)
{
    valex=8;
    valey=8;
    anchoLectura = valxlec;
    altoLectura = valylec;

}

void escalado::asiggnVect(vector< vector< vector<int> > > vec3d)
{
    vec3d2 = vec3d;
}

void escalado::escalameEsta()
{

    //es mas chiquita en los dos ejes x< y<
    if(anchoLectura < valex && altoLectura < valey){
        vector<vector<vector<int>>> vectTemp;
    }
    //es mas chiquita en solo el eje x e igual en el y x< y==
    else if(anchoLectura < valex && altoLectura == valey){
        vector<vector<vector<int>>> vectTemp;
    }
    //es mas chiquita en solo el eje x y es mas grande en y x< y>
    else if (anchoLectura < valex && altoLectura > valey){
        vector<vector<vector<int>>> vectTemp;
    }
    //es mas chiquita en solo el eje y e igual en el x y< x==
    else if(altoLectura < valey && anchoLectura == valex){
        vector<vector<vector<int>>> vectTemp;
    }
    //es mas chiquita en solo el eje y y mas grande en x y< x>
    else if(altoLectura < valey && anchoLectura > valex){
        vector<vector<vector<int>>> vectTemp;
    }
    //es mas grande en los dos ejes y> x>
    else if(anchoLectura > valex && altoLectura > valey){
        vector<vector<vector<int>>> vectTemp;
    }
    //es mas grande solo en x y igual en y x> y==
    else if(anchoLectura > valex && altoLectura == valey){
        vector<vector<vector<int>>> vectTemp;
    }

    //es mas grande solo en y y igual en x y> x==
    else if(altoLectura > valey && anchoLectura == valex){
        vector<vector<vector<int>>> vectTemp;
    }


}


escalado::~escalado()
{

}
