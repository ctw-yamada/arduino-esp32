#include "NefryEddystone.h"

void setup() {
  NefryEddystone.begin();
  NefryEddystone.setUrl("google.com");
  Serial.println("Advertise URL");
}

void loop() {
}
