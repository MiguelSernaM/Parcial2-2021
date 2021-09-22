#include "lecturaescritura.h"


lecturaEscritura::lecturaEscritura(QString nombre)
{
    direction="../parcial2Qt/Imagenes/";
    nombre= "piskel.png";
    direction+=nombre;
    imagenFuente = new QImage(direction);
    if(!imagenFuente->load(direction)){
        cout << "Error abriendo imagen. Asegurese de haber ingresado los caracteres" << endl;
        cout << "correctamente" << endl;
        exit(1);
    }
    ancho = imagenFuente->width();
    alto = imagenFuente->height();
    color = 3;
    escribirDatos();
    //pruebaxd();
}

    void lecturaEscritura::escribirDatos()
{
    vector< vector< vector<int> > > arreglo3d(ancho, vector< vector<int> >(alto , vector<int>(color)));
    int tempInt;
    for(int i=0;i<ancho;++i){
        for(int j=0;j<alto;++j){
            for(int k=0;k<color;++k){
                switch (k) {
                case 0:{
                    tempInt = imagenFuente->pixelColor(i,j).red();
                    if(tempInt == 255)
                        tempInt--;
                    arreglo3d[i][j][k] = tempInt;
                    break;
                }
                case 1:{
                    tempInt = imagenFuente->pixelColor(i,j).green();
                    if(tempInt == 255)
                        tempInt--;
                    arreglo3d[i][j][k] = tempInt;
                    break;
                }
                case 2:{
                    tempInt = imagenFuente->pixelColor(i,j).blue();
                    if(tempInt == 255)
                        tempInt--;
                    arreglo3d[i][j][k] = tempInt;
                    break;
                }
                }
            }
        }
    }
    vec3d = arreglo3d;
//    cout<<"Content of 3D Vector: "<<endl;
//    for(int i=0;i<ancho;++i){
//        for(int j=0;j<alto;++j){
//            for(int k=0;k<color;++k){
//                cout<<arreglo3d[i][j][k]<<' ';
//            }
//            cout << "-";
//        }
//        cout<<endl;
//    }
    }

    void lecturaEscritura::pruebaxd()
    {
        cout <<"---------------LAAPRIEBAAAAAA"<<endl;
        for(int i=0;i<ancho;++i){
            for(int j=0;j<alto;++j){
                for(int k=0;k<color;++k){
                    cout<<vec3d[i][j][k]<<' ';
                }
                cout << "-";
            }
            cout<<endl;
        }
    }

    void lecturaEscritura::escribirTxt(vector< vector< vector<int> > > vec3D)
    {
        ofstream myfile;
          myfile.open ("../parcial2Qt/Generado/copiame.txt");
          myfile << "Writing this to a file.\n";
          myfile.close();
    }


    vector<vector<vector<int> > > lecturaEscritura::getVectorSinEscalar()
    {
        return vec3d;
    }
    int lecturaEscritura::getAncho() const
    {
        return ancho;
    }
    int lecturaEscritura::getAlto() const
    {
        return alto;
    }
    QImage *lecturaEscritura::getImagenFuente() const
    {
        return imagenFuente;
    }


lecturaEscritura::~lecturaEscritura()
{
    delete imagenFuente;
}
