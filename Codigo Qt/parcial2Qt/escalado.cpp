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

void escalado::sobremuestrear( int signox,int signoy)
{
//supongamos que esta es la de maximizar pq no me acuerdo si era la otra xD
    //Tengo que ver la proporción de cuanto me falta y reemplazar ese valor en un for para llenar pixeles


}

void escalado::submuestrar(int signox,int signoy)
{
    //Con usted mijita tengo que ver es cuanto me esta sobrando, dividirlo por 8 creo xD y sacar promedio de colores
}
//funcion encargada de detectarme las diferencas uwu
void escalado::detectDiference()
{
    //es mas chiquita en los dos ejes x< y<
    if(anchoLectura < valex && altoLectura < valey){

    }
    //es mas chiquita en solo el eje x e igual en el y x< y==
    else if(anchoLectura < valex && altoLectura == valey){

    }
    //es mas chiquita en solo el eje x y es mas grande en y x< y>
    else if (anchoLectura < valex && altoLectura > valey){

    }
    //es mas chiquita en solo el eje y e igual en el x y< x==
    else if(altoLectura < valey && anchoLectura == valex){

    }
    //es mas chiquita en solo el eje y y mas grande en x y< x>
    else if(altoLectura < valey && anchoLectura > valex){

    }
    //es mas grande en los dos ejes y> x>
    else if(anchoLectura > valex && altoLectura > valey){

    }
    //es mas grande solo en x y igual en y x> y==
    else if(anchoLectura > valex && altoLectura == valey){

    }

    //es mas grande solo en y y igual en x y> x==
    else if(altoLectura > valey && anchoLectura == valex){

    }

}

escalado::~escalado()
{

}
