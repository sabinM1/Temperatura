# Temperatura
Programe Arduino pentru a citi temperatura cu ajutorul unui termistor de 10K

### Demo

![Demo](https://github.com/sabinM1/Temperatura/raw/master/demo.gif)

## Materiale necesare
 - un Arduino (am folosit Pro Micro) si Arduino IDE;
 - [un termistor de 10KΩ](https://www.tme.eu/ro/details/ntcc-10k/termistori-ntc-de-masura-tht/sr-passives/);
 - o rezistenta de 10KΩ;
 - cabluri;
 Optionale dar recomandate:
 - un breadboard;
 - un display 16x2 pixeli LCD;
 - potentiometru pentru LCD, daca nu este inclus;
 
## Cum rulezi programul?
 **Doua moduri de folosire:** <br>
Cu un display 16x2 LCD sau fara.
Cele doua programele sunt puse in folderele respective ([cu](https://github.com/sabinM1/Temperatura/tree/master/CuLCD),[fara](https://github.com/sabinM1/Temperatura/tree/master/FaraLCD)). A fi rulate pe un calculator cu Arduino IDE sau programe similare.

## Precizari/Observatii:
Nu am avut succes pe un Arduino UNO, probabil ceva in formula lui Steinhart-Hart nu este corect pentru el. <br>
Termistorul trebuie sa fie de 10KΩ pentru a functiona corect, daca nu, formula lui Steinhart-Hart nu va fi corecta. <br>
Serial baud sa fie pe 115200. <br>
Conexiunile de la LCD sunt [ca in aceasta imagine](https://lastminuteengineers.com/wp-content/uploads/arduino/Testing-16x2-Character-LCD-Contrast-By-Turning-Potentiometer.gif). <br>
Rezistenta si termistorul sunt [astfel, dupa imagine](https://cdn.tutsplus.com/mac/uploads/2013/09/thermistor-setup-small.png). <br>
