#include "lecturaescritura.h"


lecturaEscritura::lecturaEscritura(QString nombre_)
{
    direction="../parcial2Qt/Imagenes/";
    QString nombre=nombre_;
    direction+=nombre;
    imagenFuente = new QImage(direction);
    if(!imagenFuente->load(direction)){
        cout << "Error abriendo imagen. Asegurese de haber ingresado los caracteres" << endl;
        cout << "correctamente" << endl;
        exit(1);
    }
    ancho = imagenFuente->width();
    alto = imagenFuente->height();
}


    void lecturaEscritura::escribirTxt(vector< vector< vector<int> > > vec3D)
    {
        ofstream myfile;
          myfile.open ("../parcial2Qt/Generado/copiame.txt");
          myfile << "byte arrays[64][3]={";
          for(int i = 0; i < 8; i++){
              for(int j = 0; j < 8;j++){
                  for(int k = 0; k < 3; k++){
                      switch (k) {
                      case 0:{
                          myfile <<"{" <<vec3D[i][j][k] << ",";
                          break;
                      }
                      case 1:{
                          myfile << vec3D[i][j][k] << ",";
                          break;
                      }
                      case 2:{
                          myfile << vec3D[i][j][k] << "}";
                          break;
                      }
                      }
                  }
                  if(j+1 < 8)
                    myfile << ",";

              }
              if(i+1 == 8){
                  myfile << "};";
              }
              if(i+1 < 8)
                myfile << ",\n";
          }
          myfile.close();
          cout << "Tarea finalizada" << endl;
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
