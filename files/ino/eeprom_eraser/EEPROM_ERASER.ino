#include <EEPROM.h> 
void setup()
{
  Serial.begin(115200);
  Serial.println();    
  EEPROM.begin(512);
  for(int i = 0; i < 125; ++i)
  {
    EEPROM.write(i, 0);
  } 
    EEPROM.commit();
    Serial.println("DONE! EEPROM-ERASED");    
} 
void loop(){}
