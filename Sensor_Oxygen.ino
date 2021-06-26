
 //#define KE_25 
 #define KE_50 
 
 const float Scalc_50 = (1/2.66); // KE_50, Output Voltage (mV) = Oxygen Concentration (%) * 2.66 
 const float Scalc_25 = (1/0.625); // KE_25, Output Voltage (mV) = Oxygen Concentration (%) * 0.625 
     
void setup() {
  
 Serial.begin(9600);
 pinMode(A0, INPUT); 
 
}

void loop() {
  
 #ifdef KE_25
     int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("sensorValue : ");
  Serial.print(sensorValue);
  float Oxygen_Sensor = sensorValue * Scalc_25 * 0.175;
  Serial.print("    Oxygen value:   ");
  Serial.print(Oxygen_Sensor,1);
  Serial.println("%");
  delay(1000);
 #endif
 
 #ifdef KE_50 
     int sensorValue2 = analogRead(A0);
  // print out the value you read:
  Serial.print("sensorValue : ");
  Serial.print(sensorValue2);
  float Oxygen_Sensor2 = sensorValue2 * Scalc_50 *0.93;
  Serial.print("    Oxygen value:   ");
  Serial.print(Oxygen_Sensor2,1);
  Serial.println("%");
  delay(1000);
   #endif
}
