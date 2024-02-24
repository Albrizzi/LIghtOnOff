#include <Arduino.h>
#include "Bathroom.h"

// Definir el pin al que está conectado el relé
const int relayPin = 7;
const int lightPin = 2;
const int pirPin = 12;



// Crear una instancia de la clase Bathroom
Bathroom bathroom(relayPin, lightPin, pirPin);

void setup() {
	Serial.begin (9600);
	
	
}

void loop() {
	// Ejemplo de cómo se podría usar la clase Bathroom
	bathroom.statePir();
	bathroom.stateLogic(); // Encender la luz del baño
	bathroom.LightOnOff(); // Encender la luz de aviso
	if (digitalRead (pirPin) == 1 ? Serial.println ("ON"): Serial.println ("OFF"));
	

}