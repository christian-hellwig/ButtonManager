#include "ButtonManager.h"

#define PIN_INPUT 35
ButtonManager brewSwitch(PIN_INPUT, true);
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    brewSwitch.tick();
    //Serial.println(brewSwitch.getDebouncedState());
    //Serial.println(brewSwitch.getRawState());
    //Serial.println(brewSwitch.getSingleClick());
    //Serial.println(brewSwitch.getDoubleClick());
    //Serial.println(brewSwitch.getTrippleClick());
    //Serial.println(brewSwitch.getLongPressActive());
    //Serial.println(brewSwitch.getLongPress());
    Serial.println(brewSwitch.getNumberClicks());
    //Serial.println(digitalRead(35));
}
