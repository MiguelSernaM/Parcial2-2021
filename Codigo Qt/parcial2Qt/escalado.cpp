#include "escalado.h"

escalado::escalado(int valxlec, int valylec)
{
    valex=8;
    valey=8;
    anchoLectura = valxlec;
    altoLectura = valylec;
    ajustx = anchoLectura;
    ajusty = altoLectura;
    escalameEsta();

}

void escalado::asiggnVect(vector< vector< vector<int> > > vec3d)
{
    vec3d2 = vec3d;
}

void escalado::escalameEsta()
{
vector<vector<vector<int>>> vectTemp(8, vector< vector<int> >(8 , vector<int>(3)));
int redProm=0,greenProm=0,blueProm=0;
int contadorx=0, contadory=0;
int columns=0,filas=0;
int divProm=0;
int posAuX=0,posAuy=0;
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
//    for(int i = 0; i < 8; i++){
//        contadory++;
//        for(int j = 0; j < 8; j++){
//            contadorx++;
//            //este siempre va a ir. para calcular promedio rgb
//            //digamos que tengo que coger 2 de ancho y 2 de alto

//            for(int a=0; a < anchoLectura; a++){
//                columns++;
//                if(filas)
//                for(int h=0; h < altoLectura;h++){


//                    if(columns == anchoLectura){

//                        break;
//                    }
//                    for(int k = 0; k < 3; k++){
//                        switch (k) {
//                        case 0:{
//                            redProm += vec3d2[i][j][k];
//                        }
//                        case 1:{
//                            greenProm += vec3d2[i][j][k];
//                        }
//                        case 2:{
//                            blueProm += vec3d2[i][j][k];
//                        }
//                            divProm ++;
//                        }
//                    }
//                }
//            }
//            for(int p = 0; p < 3; p++){
//                switch (p) {
//                case 0:{
//                    vectTemp[i][j][p] = redProm;
//                }
//                case 1:{
//                    vectTemp[i][j][p] = greenProm;
//                }
//                case 2:{
//                    vectTemp[i][j][p] = blueProm;
//                }
//                }
//            }

//        }

//        redProm=0;
//        greenProm=0;
//        blueProm=0;
//    }
    int arregloM[8][3];
    int matriz[64][3];
    int sumas=0;
    int contador2=0;
    int contadorAzul=0,contadorRojo=0,contadorVerde=0;
    for(int i = 0; i < anchoLectura; i++){
        for(int j=0,contador=0; j < altoLectura; j++){
            for(int k=0; k < 3; k++){
                sumas += vec3d2[i][j][k];
                switch (k) {
                case 0:{
                    arregloM[contador][0] += vec3d2[i][j][k];

                }
                case 1:{
                    arregloM[contador][1] += vec3d2[i][j][k];
                }
                case 2:{
                    arregloM[contador][2] += vec3d2[i][j][k];
                }
                }
                //k == 0 rojo R
                //k == 1 verde G
                //k == 2 azul B
            }
            contador++;
            if(contador == 7){
                //arregloM[contador2] = sumas;
                contador2++;
            }
        }

    }


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
