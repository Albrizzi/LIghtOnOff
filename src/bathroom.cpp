#include "Bathroom.h"
#include <Arduino.h>

Bathroom::Bathroom(int relayPin, int lightPin, int pirPin) : relayPin(relayPin), lightPin(lightPin), pirPin(pirPin) {
    pinMode(relayPin, OUTPUT); // Configurar el pin del relé como salida
  	pinMode(lightPin, OUTPUT); // Configurar el pin de la luz como salida
  	pinMode(pirPin, INPUT);
}

void Bathroom::stateLogic() {

  // Obtener el estado actual del sensor PIR
  bool currentPirState = statePir();

  // Verificar si el sensor PIR ha cambiado de HIGH a LOW
  if (previousPirState && !currentPirState) {
    // Si cambió de HIGH a LOW, activar el rele
    digitalWrite(relayPin, state);
    state = !state;
  }

  previousPirState = currentPirState;

}

void Bathroom::LightOnOff(){
  digitalWrite(lightPin, value);
}

bool Bathroom::statePir (){

  value = digitalRead (pirPin);

  return value;
}
