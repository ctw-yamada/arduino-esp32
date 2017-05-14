#include "NefryEddystone.h"

void setup() {
    Eddystone.begin();
	Eddystone.setUrl("google.com");
    Serial.println("Advertise URL");
}

void loop() {
}
