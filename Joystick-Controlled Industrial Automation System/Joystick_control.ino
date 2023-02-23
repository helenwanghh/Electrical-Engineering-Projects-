// Arduino pin numbers
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output
const int RLY1 = 2;
const int RLY2 = 3;
const int RLY3 = 4;
const int RLY4 = 5;

void setup() {
  pinMode(RLY1,OUTPUT);
  pinMode(RLY2,OUTPUT);
  pinMode(RLY3,OUTPUT);
  pinMode(RLY4,OUTPUT);
  digitalWrite(RLY1, HIGH);
  digitalWrite(RLY2, HIGH);
  digitalWrite(RLY3, HIGH);
  digitalWrite(RLY4, HIGH);
  Serial.begin(9600);
}

void loop() {
  
  int X=analogRead(X_pin);
  int Y=analogRead(Y_pin);
  //Serial.println(X);
  //Serial.println(Y);
  
  if(X<=50)
  {
      digitalWrite (RLY1, (digitalRead(RLY1)== HIGH ? LOW : HIGH));
  delay(500);    
  }
  else if(X>=900)
  {
    digitalWrite (RLY2, (digitalRead(RLY2)== HIGH ? LOW : HIGH));
  delay(500);
  }
  else if(Y<=50)
  {
    digitalWrite (RLY3, (digitalRead(RLY3)== HIGH ? LOW : HIGH));
  delay(500);
  }
  else if(Y>=900)
  {
    digitalWrite (RLY4, (digitalRead(RLY4)== HIGH ? LOW : HIGH));
  delay(500);
  }
  else
  {
    delay(10);
  }}
