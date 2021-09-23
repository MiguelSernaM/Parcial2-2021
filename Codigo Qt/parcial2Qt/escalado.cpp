#include "escalado.h"

escalado::escalado(int valxlec, int valylec)
{
    valex=8;
    valey=8;
    anchoLectura = valxlec;
    altoLectura = valylec;
    ajustx = anchoLectura;
    ajusty = altoLectura;
    imagenaEscalar = new QImage;

}

void escalado::asiggnVect(vector< vector< vector<int> > > vec3d)
{
    vec3d2 = vec3d;
}

void escalado::escalameEsta()
{
    vector<vector<vector<int>>> vectTemp(8, vector< vector<int> >(8 , vector<int>(3)));
    //solucion bajo mi concepto general para ponerlas mas peques

    int tempInt;
    int radiox = anchoLectura/8;
    int radioy = altoLectura/8;
        //reduccion pura
    if(anchoLectura > valex && altoLectura > valey){
        short x = 8;
        while(x > 0){
            x--;
            short y=8;
            while(y > 0){
                y--;

                for(int i = 0; i < 3;i++){
                    switch (i) {
                    case 0:{

                        tempInt=imagenaEscalar->pixelColor((x*radiox),(y*radioy)).red();

                        if(tempInt == 255){
                            tempInt--;
                        }
                        vectTemp[x][y][i] = tempInt;
                        break;
                    }
                    case 1:{
                        tempInt = imagenaEscalar->pixelColor((x*radiox),(y*radioy)).green();
                        if(tempInt == 255){
                            tempInt--;
                        }
                        vectTemp[x][y][i] = tempInt;
                        break;
                    }
                    case 2:{
                        tempInt = imagenaEscalar->pixelColor((x*radiox),(y*radioy)).blue();
                        if(tempInt == 255){
                            tempInt--;
                        }
                        vectTemp[x][y][i] = tempInt;
                        break;
                    }
                    }
                }
            }
        }
    }
    //aumentar imagen pura
    else if(anchoLectura < valex && altoLectura < valey){
        int contadorFilas=0,contadorColums=0;
        radiox = 1;
        contadorFilas = 8/anchoLectura;
        radioy = 1;
        contadorColums = 8/altoLectura;
        short x=8;
        while(x > 0){
            x--;
            short y = 8;
            while(y > 0){
                y--;
                //--------Aca va el while normal si o que

                for(int k = 0; k < 3; k++){
                    int arregloAux[3]={};
                    switch (k) {
                    case 0:{
                        arregloAux[0] = imagenaEscalar->pixelColor(anchoLectura,altoLectura).red();
                        break;
                    }
                    case 1:{
                        arregloAux[1] = imagenaEscalar->pixelColor(anchoLectura,altoLectura).green();
                        break;
                    }
                    case 2:{
                        arregloAux[2] = imagenaEscalar->pixelColor(anchoLectura,altoLectura).blue();
                        break;
                    }
                    }
                }
            }
        }
    }

    vec3d2 = vectTemp;
    //-----------------------------------------------------------------------------------------


}

void escalado::asignarImagen(QImage *imagen)
{
    imagenaEscalar = imagen;
}

vector<vector<vector<int> > > escalado::getVectorScall()
{
    return vec3d2;
}


escalado::~escalado()
{
    delete imagenaEscalar;
}
