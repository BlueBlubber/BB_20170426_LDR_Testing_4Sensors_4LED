// Test Code to test the LDR from https://diyhacking.com/arduino-ldr-sensor/
// Adapted to read more LDRs and to show via LEDs which one is under a certain
// Value

int sensorPin01 = A0; // select the input pin for LDR01
int sensorPin02 = A1; // select the input pin for LDR02
int sensorPin03 = A2; // select the input pin for LDR03
int sensorPin04 = A3; // select the input pin for LDR04
int sensorValue01 = 0; // variable to store the value coming from the sensor01
int sensorValue02 = 0; // variable to store the value coming from the sensor02
int sensorValue03 = 0; // variable to store the value coming from the sensor03
int sensorValue04 = 0; // variable to store the value coming from the sensor04
int reference = 700;
int LED01 = 10;
int LED02 = 8;
int LED03 = 7;
int LED04 = 4;


void setup() {
  Serial.begin(9600); //sets serial port for communication
  pinMode(LED01, OUTPUT);
  pinMode(LED02, OUTPUT);
  pinMode(LED03, OUTPUT);
  pinMode(LED04, OUTPUT);
}

void loop() {
  sensorValue01 = analogRead(sensorPin01); // read the value from the sensor01
  Serial.print("SENSOR_01: ");
  Serial.println(sensorValue01); //prints the values coming from the sensor01 on the screen
  if (sensorValue01 < reference) {
    digitalWrite(LED01, HIGH);
  }
  else {
    digitalWrite(LED01, LOW);
  }
  
  sensorValue02 = analogRead(sensorPin02); // read the value from the sensor02
  Serial.print("SENSOR_02: ");
  Serial.println(sensorValue02); //prints the values coming from the sensor02 on the screen
  if (sensorValue02 < reference) {
    digitalWrite(LED02, HIGH);
  }
  else {
    digitalWrite(LED02, LOW);
  }
  
  sensorValue03 = analogRead(sensorPin03); // read the value from the sensor01
  Serial.print("SENSOR_03: ");
  Serial.println(sensorValue03); //prints the values coming from the sensor03 on the screen
  if (sensorValue03 < reference) {
    digitalWrite(LED03, HIGH);
  }
  else {
    digitalWrite(LED03, LOW);
  }
  
  sensorValue04 = analogRead(sensorPin04); // read the value from the sensor01
  Serial.print("SENSOR_04: ");
  Serial.println(sensorValue04); //prints the values coming from the sensor04 on the screen
  if (sensorValue04 < reference) {
    digitalWrite(LED04, HIGH);
  }
  else {
    digitalWrite(LED04, LOW);
  }
  delay(100);
}
