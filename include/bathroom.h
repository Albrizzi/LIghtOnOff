#ifndef BATHROOM_H
#define BATHROOM_H


class Bathroom {
  private:
    int relayPin;
    int lightPin;
    int pirPin;
    bool value;
    bool previousPirState = false;
    bool state = true;

  public:
    Bathroom(int relayPin, int lightPin, int pirPin); // Constructor
    
    bool statePir ();
    void stateLogic();
    void LightOnOff();
    
};

#endif
