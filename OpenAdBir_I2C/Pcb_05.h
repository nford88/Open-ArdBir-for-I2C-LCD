// sensor and lcd per PCB Beta 05 BrauDuino
OneWire ds(8);
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// push buttons
const char Button_enter = A2;
const char Button_start = A3;
const char Button_up    = A4;
const char Button_dn    = A5;

// outputs
const byte Pump = 9;
const byte Buzz = 10;
const byte Heat = 11;


