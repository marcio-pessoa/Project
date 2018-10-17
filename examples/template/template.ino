// Load library
#include <Project.h>

// Project definitions
Project foo("foo",  // Platform
            "I",  // Mark
            "Foo project long description",  // Name
            "0.00b",  // Version
            "2018-10-17",  // Version date
            "0001",  // Serial number
            "Copyleft (>) 2012-2018 Marcio Pessoa",  // Owner
            "undefined. There is NO WARRANTY.",  // License
            "http://example.com/",  // Website
            "Marcio Pessoa <marcio.pessoa@gmail.com>");  // Contact

void setup() {
  // Serial interface
  Serial.begin(9600);
}

void loop() {
  Serial.println(x2.version());
  Serial.println(x2.owner());
  Serial.println(x2.compiled());
  Serial.println(x2.license());
  Serial.println(x2.website());
  Serial.println(x2.contact());
  delay(5)
}
