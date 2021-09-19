#include "lecturaescritura.h"

lecturaEscritura::lecturaEscritura(QString nombre)
{
    direction="../parcial2Qt/Imagenes/";
    nombre= "prueba.JPG";
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
    pruebaxd();
}

    void lecturaEscritura::escribirDatos()
{
    vector< vector< vector<int> > > arreglo3d(ancho, vector< vector<int> >(alto , vector<int>(color)));

    for(int i=0;i<ancho;++i){
        for(int j=0;j<alto;++j){
            for(int k=0;k<color;++k){
                switch (k) {
                case 0:{
                    arreglo3d[i][j][k] = imagenFuente->pixelColor(i,j).red();
                    break;
                }
                case 1:{
                    arreglo3d[i][j][k] = imagenFuente->pixelColor(i,j).green();
                    break;
                }
                case 2:{
                    arreglo3d[i][j][k] = imagenFuente->pixelColor(i,j).blue();
                    break;
                }
                }
            }
        }
    }
    vec3d = arreglo3d;
    cout<<"Content of 3D Vector: "<<endl;
    for(int i=0;i<ancho;++i){
        for(int j=0;j<alto;++j){
            for(int k=0;k<color;++k){
                cout<<arreglo3d[i][j][k]<<' ';
            }
            cout << "-";
        }
        cout<<endl;
    }
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

    void lecturaEscritura::escribirTxt()
    {
        QString linea1, linea2;
        QFile archivo("../example/Generado/");
        if (archivo.open(QIODevice::ReadOnly)) {
            QTextStream in(&archivo);
            while (!in.atEnd())
            {
                linea1 = in.readLine();
    }
        }
    }


    vector<vector<vector<int> > > lecturaEscritura::getVectorSinEscalar()
    {
        return vec3d;
    }

lecturaEscritura::~lecturaEscritura()
{
    delete imagenFuente;
}
