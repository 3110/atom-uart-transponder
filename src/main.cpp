#include <M5Atom.h>

const bool ENABLE_SERIAL = true;
const bool ENABLE_I2C = false;
const bool ENABLE_DISPLAY = true;

void setup(void)
{
    M5.begin(ENABLE_SERIAL, ENABLE_I2C, ENABLE_DISPLAY);
    Serial2.begin(115200, SERIAL_8N1, 32, 26); // HY2.0-4P
}

void loop(void)
{
    M5.update();
    while (Serial2.available() > 0)
    {
        Serial.write(Serial2.read());
    }
}