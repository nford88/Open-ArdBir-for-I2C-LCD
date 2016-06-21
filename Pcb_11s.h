// sensor and lcd
OneWire ds(8);
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// push buttons
const char Button_up    = A2;
const char Button_dn    = A3;
const char Button_start = A0;
const char Button_enter = A1;

// outputs
const byte Heat = 6;
const byte Pump = 9;
const byte Buzz = 7;


