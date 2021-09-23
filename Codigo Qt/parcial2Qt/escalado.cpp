#include "escalado.h"

escalado::escalado(int valxlec, int valylec)
{
    valex=8;
    valey=8;
    anchoLectura = valxlec;
    altoLectura = valylec;
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
    bool mayorx = false;
    bool mayory = false;

        //reduccion pura
//    if(anchoLectura > valex && altoLectura > valey){
//        short x = 8;
//        while(x > 0){
//            x--;
//            short y=8;
//            while(y > 0){
//                y--;

//                for(int i = 0; i < 3;i++){
//                    switch (i) {
//                    case 0:{

//                        tempInt=imagenaEscalar->pixelColor((x*radiox),(y*radioy)).red();

//                        if(tempInt == 255){
//                            tempInt--;
//                        }
//                        vectTemp[x][y][i] = tempInt;
//                        break;
//                    }
//                    case 1:{
//                        tempInt = imagenaEscalar->pixelColor((x*radiox),(y*radioy)).green();
//                        if(tempInt == 255){
//                            tempInt--;
//                        }
//                        vectTemp[x][y][i] = tempInt;
//                        break;
//                    }
//                    case 2:{
//                        tempInt = imagenaEscalar->pixelColor((x*radiox),(y*radioy)).blue();
//                        if(tempInt == 255){
//                            tempInt--;
//                        }
//                        vectTemp[x][y][i] = tempInt;
//                        break;
//                    }
//                    }
//                }
//            }
//        }
//    }
    //aumentar imagen pura

//    else if(anchoLectura < valex && altoLectura < valey){


        int contadorFilas=0,contadorColums=0;
        int pivote = altoLectura-1;
        float cotaX = 8/anchoLectura;
        float cotaY = 8/altoLectura;
        if(anchoLectura > 8)
            mayorx = true;
        if(anchoLectura > 8){
            mayory = true;
        }
        anchoLectura--;
        altoLectura--;
        short x=8;
        while(x > 0){
            x--;
            contadorFilas++;
            if(contadorFilas >cotaX){
                anchoLectura--;
                contadorFilas=0;
            }

            short y = 8;
            altoLectura = pivote;
            contadorColums =0;
            while(y > 0){
                y--;
                contadorColums++;
                if(contadorColums > cotaY){
                    contadorColums=0;
                    altoLectura--;
                }
                //--------Aca va el while normal si o que

                for(int k = 0; k < 3; k++){
                    switch (k) {
                    case 0:{
                        if(mayorx && mayory){
                            tempInt = imagenaEscalar->pixelColor(x*radiox,y*radioy).red();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else if(mayorx){
                            tempInt = imagenaEscalar->pixelColor(x*radiox,altoLectura).red();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else if(mayory){
                            tempInt = imagenaEscalar->pixelColor(anchoLectura,y*radioy).red();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else{
                            tempInt = imagenaEscalar->pixelColor(anchoLectura,altoLectura).red();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }

                        break;
                    }
                    case 1:{
                        if(mayorx && mayory){
                            tempInt = imagenaEscalar->pixelColor(x*radiox,y*radioy).green();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else if(mayorx){
                            tempInt = imagenaEscalar->pixelColor(x*radiox,altoLectura).green();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else if(mayory){
                            tempInt = imagenaEscalar->pixelColor(anchoLectura,y*radioy).green();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else{
                            tempInt = imagenaEscalar->pixelColor(anchoLectura,altoLectura).green();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        break;
                    }
                    case 2:{
                        if(mayorx && mayory){
                            tempInt = imagenaEscalar->pixelColor(x*radiox,y*radioy).blue();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else if(mayorx){
                            tempInt = imagenaEscalar->pixelColor(x*radiox,altoLectura).blue();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else if(mayory){
                            tempInt = imagenaEscalar->pixelColor(anchoLectura,y*radioy).blue();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        else{
                            tempInt = imagenaEscalar->pixelColor(anchoLectura,altoLectura).blue();
                            if(tempInt == 255)
                                tempInt--;
                            vectTemp[x][y][k] = tempInt;
                        }
                        break;
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
