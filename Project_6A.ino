void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

int x = 1; //variable
int variable = 5;
int multiplier = 5;

for (x=1; x<=10; ++x)  //the for loop
{ Serial.print(x); Serial.print(" x "); Serial.print(variable); Serial.print(" = ");Serial.println(x*multiplier); Serial.println(" ");}
}

void loop() {
  // put your main code here, to run repeatedly:

}
