#include <LiquidCrystal.h>
const int rs = 5, en = 18, d4 = 19, d5 = 21, d6 = 22, d7 = 23;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#include<Wire.h>
#define I2C_SDA 32
#define I2C_SCL 33
int ADXL345 = 0x53;  // The ADXL345 sensor I2C address
//TwoWire I2CBME = TwoWire(0);
float X_out, Y_out;  // Outputs

void setup()
 {
  Serial.begin(9600);  // Initiate serial communication for printing the
                       //                    results on the Serial monitor
                       // I2CBME.begin(I2C_SDA, I2C_SCL, 100000);
   lcd.begin(16, 2);


  // default settings
  // (you can also pass in a Wire library object like &Wire2)

  Wire.begin(I2C_SDA, I2C_SCL, 100000);  // Initiate the Wire library
  // Set ADXL345 in measuring mode
  Wire.beginTransmission(ADXL345);  // Start communicating with the device
  Wire.write(0x2D);                 // Access/ talk to POWER_CTL Register - 0x2D
  // Enable measurement
  Wire.write(8);  // (8dec -> 0000 1000 binary) Bit D3 High for measuring enable
  Wire.endTransmission();
  delay(10);
}

void loop()
 {
  // === Read acceleromter data === //
  Wire.beginTransmission(ADXL345);
  Wire.write(0x32);  // Start with register 0x32 (ACCEL_XOUT_H)
  Wire.endTransmission(false);    
  Wire.requestFrom(ADXL345, 6, true);        // Read 6 registers total, each axis value is stored in 2 registers
  X_out = (Wire.read() | Wire.read() << 8);  // X-axis value
  X_out = X_out / 255;                       //For a range of +-2g, we need to divide the raw values by 256, according to the datasheet
  Y_out = (Wire.read() | Wire.read() << 8);  // Y-axis value
  Y_out = Y_out / 255;
 
  
  Serial.print("X:");
  Serial.print(X_out);
 
  
  Serial.print("Y:");
  Serial.print(Y_out);

  Serial.println();
 

  lcd.setCursor(0,0);
  lcd.print("X:");
  lcd.print(X_out);
  lcd.print("       ");

  lcd.setCursor(8,0);
  lcd.print("Y:");
  lcd.print(Y_out);
  lcd.print("       ");

 /* if((X_out<256) || (Y_out<256))
  {
      lcd.setCursor(0,1);
  lcd.print("ABNORMAL");

  }
  else
  {
    lcd.setCursor(0,1);
 
  lcd.print("              ");
  }*/

  delay(1000);
}