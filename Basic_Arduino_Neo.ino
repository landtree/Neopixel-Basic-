#include <Adafruit_NeoPixel.h>

//defines Neopixels
#define PIN            8
#define NUMPIXELS      5

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {

pixels.begin();

// This initializes the NeoPixel library.
}

void loop() {

  //Turns on NeoPixels from Pixel 0 to Pixel NUMPIXELS
  
for(int i=0;i<NUMPIXELS;i++){
  pixels.setPixelColor(i, pixels.Color(195,0,182));
  pixels.show();
  delay(50);
}
}
