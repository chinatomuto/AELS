const int LEDpin = 8;  
const int photoPIN = A0;  
const int buzzer = 9;
    
void setup() {  
  // initializing the serial communication:  
  Serial.begin(9600);  
  pinMode(photoPIN, INPUT);  
  pinMode(LEDpin, OUTPUT);  
  pinMode(buzzer, OUTPUT);
}  
void loop() {  
  // read the sensor:  
  int sensorStatus = analogRead(photoPIN);  
   // now, it will check the reading or status of the sensor is < 200  
  // if it is, LED will be HIGH  
  if (sensorStatus <200)  
  {  
    digitalWrite(LEDpin, HIGH);
    tone(buzzer, 1000);  
    Serial.println(" LED is ON, status of sensor is DARK");  
    Serial.println(" sound is ON, status of sensor is DARK");
  }  
  else  
  {  
    digitalWrite(LEDpin, LOW);  
    noTone(buzzer); 
    Serial.println(" ***************");  
  }  
}  
