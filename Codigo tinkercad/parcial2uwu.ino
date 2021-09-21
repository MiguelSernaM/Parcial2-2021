#include <Adafruit_NeoPixel.h>
#define LED_PIN 2
#define LED_COUNT 24
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
//Ingrese el copypaste por debajo de esta linea---------------------
byte arrays[64][3]={{11,173,56},{11,173,56},{11,173,56},{11,173,56},{15,33,113},{15,33,113},{226,2,2},{226,2,2},
					{11,173,56},{11,173,56},{11,173,56},{11,173,56},{15,33,113},{15,33,113},{226,2,2},{226,2,2},
{11,173,56},{11,173,56},{15,33,113},{15,33,113},{226,2,2},{226,2,2},{15,33,113},{15,33,113}};
//-------Y por encima de esta --------------------------------------
void setup()
{
  strip.begin();
  strip.show();
  
}

void loop()
{
    for(int i = 0; i < 24; i++){
  		strip.setPixelColor(i, arrays[i][0],arrays[i][1],arrays[i][2]);
      	//strip.setPixelColor(i, 11,173,56);
  }
  strip.show();
}