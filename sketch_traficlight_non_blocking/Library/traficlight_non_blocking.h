/*
  Et library til trafiklys
  Created by Morten og Michael.
  Released into the wild.
*/
#ifndef Morse_h
#define Morse_h
#include "Arduino.h"

class traficlight_non_blocking
{
  public:
    traficlight_non_blocking(int redPin, int yellowPin, int greenPin, int redState, int yellowState, int greenState);
    void red();
    void yellow();
    void green();
  private:
    int _redPin;
    int _yellowPin;
    int _greenPin;
    int _redState;
    int _yellowState;
    int _greenState;
};
#endif
