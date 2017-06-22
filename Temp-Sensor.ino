// Use analog input 0 to measure the temperature sensor's signal pin

const int temperaturePin = 0;

void setup()
{  
  Serial.begin(9600);
}

void loop()
{
 
  float voltage, degreesC, degreesF;

  voltage = getVoltage(temperaturePin);  //function to return the true voltage (0 to 5 volts) on the sensor
 
  degreesC = (voltage - 0.5) * 100.0;         // Convert the voltage to degrees Celsius.
 
  degreesF = degreesC * (9.0/5.0) + 32.0;     // Convert degrees Celsius to Fahrenheit.
 
  //print the values of the voltage, degrees celcius, degrees fahrenheit

  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg C: ");
  Serial.print(degreesC);
  Serial.print("  deg F: ");
  Serial.println(degreesF);
   
  delay(1000); // repeat once per second
}
float getVoltage(int pin) //user-defined function to return the true voltage (0 to 5 volts) on the temperature sensor
{
   return (analogRead(pin) * 0.004882814); //read the value of the temperature sensor and convert it to a true voltage reading
 }


