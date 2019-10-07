#include "Inkplate.h"
Inkplate display(INKPLATE_1BIT);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("READY!!!");
  display.einkOn();
  display.begin();
  display.drawLine(0, 0, 100, 200, BLACK);
  for (int i = 0; i < 7; i++) {
    display.drawLine(0, i * 100, 10, i * 100, BLACK);
  }
  display.drawLine(799, 0, 699, 200, BLACK);
  display.drawRect(0,0,799,599,BLACK);
  display.setCursor(200,200);
  display.print("Test teksta");
  display.clean();
  display.display();
  display.einkOn();
  Serial.println("Poslano na panel");
}

void loop() {
  // put your main code here, to run repeatedly:

}
