# define verde 2
# define amarillo 3
# define rojo 4


void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);

}

void loop() {

  digitalWrite(rojo, true);
  delay(5000);
  digitalWrite(rojo,false);

  digitalWrite(amarillo, true);
  delay(5000);
  digitalWrite(amarillo,false);

  digitalWrite(verde, true);
  delay(5000);
  digitalWrite(verde,false);
  
  // put your main code here, to run repeatedly:

}
