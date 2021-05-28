#include <M5Atom.h>
#include "common.h"

const bool ENABLE_SERIAL = true;
const bool ENABLE_I2C = false;
const bool ENABLE_DISPLAY = true;

const CRGB CRGB_TRANSPONDER_READY = CRGB::Blue;
const CRGB CRGB_TRANSPONDER_NOT_RECEIVED = CRGB::Black;
// LED turns green instead of red. see https://github.com/m5stack/M5Atom/issues/5
const CRGB CRGB_TRANSPONDER_RECEIVED = CRGB::Red;

void setup(void)
{
    M5.begin(ENABLE_SERIAL, ENABLE_I2C, ENABLE_DISPLAY);
    Serial2.begin(115200, SERIAL_8N1, 32, 26); // HY2.0-4P
    M5.dis.drawpix(0, CRGB_TRANSPONDER_READY);
    delay(1000);
}

void loop(void)
{
    M5.update();
    if (Serial2.available())
    {
        M5.dis.drawpix(0, CRGB_TRANSPONDER_RECEIVED);
        String recvStr = Serial2.readStringUntil('\n');
        if (recvStr[0] == '{')
        {
            SERIAL_PRINT(recvStr);
        }
    } else {
        M5.dis.drawpix(0, CRGB_TRANSPONDER_NOT_RECEIVED);
    }
}