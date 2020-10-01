#include <math.h>         //Librarie pentru ecuatii avansate

void setup() {
  Serial.begin(115200);   //Serial pe 115200 baud
}
 
double Formula_magica(int RawADC) {  //Formula lui Steinhart-Hart, adapdata pentru un rezistor de 10K
 double Temp;
 Temp = log(((10240000/RawADC) - 10000));
 Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
 Temp = Temp - 273.15;              // Kelvin in Celsius
 //Temp = (Temp * 9.0)/ 5.0 + 32.0; // si Celsius in Fahrenheit da uncomment daca vrei
 return Temp;
}
 
void loop() {
  int val;                //Variabila pt. output-ul raw de la senzor
  double temp;            //Variabila pentru a stoca temperatura
  val=analogRead(0);      //Citeste de pe analog 0 si stocheaza in "val"
  temp=Formula_magica(val);   //Calculeaza temperatura cu formula din Formula_magica
  Serial.println(temp);   //Scrie temperatura pe serial
  delay(500);            //Asteapta jumatate de secunda (sau cat vrei tu) si dupa repeta
}
