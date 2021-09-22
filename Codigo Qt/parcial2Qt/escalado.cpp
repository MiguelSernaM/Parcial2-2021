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
//solucion bajo mi concepto general
    int tempInt;
    float radiox = anchoLectura/8;
    float radioy = altoLectura/8;
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
    vec3d2 = vectTemp;
    cout << "vamos a ver";

//-----------------------------------------------------------------------------------------

//    int arregloM[8][3] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
//    int matriz[64][3];

//    for(int i = 0,contador3=0,contMatrix=0; i < anchoLectura; i++){
//        for(int j=0,contador=0,contador2=0; j < altoLectura; j++){
//            for(int k=0; k < 3; k++){
//                switch (k) {
//                case 0:{
//                    arregloM[contador][0] += vec3d2[i][j][k];
//                   // cout << vec3d2[i][j][k]<<"|";
//                    break;
//                }
//                case 1:{
//                    arregloM[contador][1] += vec3d2[i][j][k];
//                    //cout << vec3d2[i][j][k]<<"|";
//                    break;
//                }
//                case 2:{
//                    arregloM[contador][2] += vec3d2[i][j][k];
//                   // cout << vec3d2[i][j][k]<<"|"<<endl;
//                    break;
//                }
//                }

//            }
//            contador2++;
//            if(contador2 == (anchoLectura/8)){
//                contador2 = 0;
//                contador++;
//            }
//            if(contador == 7){
//                contador = 0;
//            }
//        }
//        contador3++;
//        cout << arregloM[0][0] <<" "<<arregloM[0][1]<<" "<<arregloM[0][2];
//        if(contador3 == (altoLectura/8)){
//            contador3 = 0;

//            for (int p =0;p < 8;p++ ) {
//                for(int o = 0; o < 3;o++){
//                    matriz[contMatrix][o]=arregloM[p][o] / (altoLectura/8)*(anchoLectura/8);
//                    cout << arregloM[p][o] / (altoLectura/8)*(anchoLectura/8) << endl;
//                    arregloM[p][o] = 0;

//                }
//            }
//            contMatrix++;
//        }

//    }
//    int contadura = 0;
//for(int i = 0; i < 64; i++){
//    cout<<"{";
//    for(int j = 0; j < 3; j++){
//        cout << matriz[i][j] << " , " ;
//    }
//    cout <<"}"<<++contadura<<endl;
//}

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
