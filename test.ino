
/* A simple program to sequentially turn on and turn off 3 LEDs */

int BUTTON = 7; 
int LED1 = 13;
boolean on = false;
int buttonState = 0;
int LED2 = 11;
//int LED3 = 10;
//int LED4 = 9;
 
void setup() {
   pinMode(BUTTON, INPUT);
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
//   pinMode(LED3, OUTPUT);
//   pinMode(LED4, OUTPUT);
}
 
 
void loop() {

  buttonState = digitalRead(BUTTON);
  if(buttonState == HIGH) {
    if(on == true){
      on=false;
    } else{
      on=true;
    }
  }

  if (on == true){
    digitalWrite(LED1, HIGH);
    delay(150);
    digitalWrite(LED2, HIGH);
  }
  else{
    digitalWrite(LED1, LOW);
    delay(150);
    digitalWrite(LED2,LOW);
  }

  delay(150);
  
//  digitalWrite(LED1, HIGH);    // turn on LED1
//  delay(200);                  // wait for 200ms
//  digitalWrite(LED2, HIGH);    // turn on LED2
//  delay(200);                  // wait for 200ms      
//  digitalWrite(LED3, HIGH);    // turn on LED3
//  delay(200);                  // wait for 200ms
//  digitalWrite(LED4, HIGH);
//  delay(200);
//  digitalWrite(LED1, LOW);     // turn off LED1
//  delay(300);                  // wait for 300ms
//  digitalWrite(LED2, LOW);     // turn off LED2
//  delay(300);                  // wait for 300ms
//  digitalWrite(LED3, LOW);     // turn off LED3
//  delay(300);                  // wait for 300ms before running program all over again
//  digitalWrite(LED4, LOW);     // turn off LED4
//  delay(300);
}
