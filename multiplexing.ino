/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */
 
// Pin 2-8 is connected to the 7 segments of the display.

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  //0
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);   
  delay(1);               // wait for a second
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 
  //1
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);   
  delay(1);               // wait for a second
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW); 
  //2
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);     
  delay(1);               // wait for a second

  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH); 
  //3
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);     
  delay(1);               // wait for a second
/*  
  //4
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);     
  delay(1000);               // wait for a second
  
  //5
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);     
  delay(1000);               // wait for a second
  
  //6
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);     
  delay(1000);               // wait for a second
  
  //7
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);     
  delay(1000);               // wait for a second
  
  //8
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);     
  delay(1000);               // wait for a second

  //9
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);     
  delay(1000);               // wait for a second
  */
}


/* Pin 2-8 is connected to the 7 segments of the display. */
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;
int D5 = 13;

// The setup routine runs once when you press reset:
void setup() {
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
}

// The loop routine runs over and over again forever:
void loop() {
  digitalWrite(D1, LOW);  //SESSION 1
  digitalWrite(D2, LOW);  //SESSION 1
  digitalWrite(D3, HIGH); //SESSION 1
  digitalWrite(D4, LOW);  //SESSION 1
  digitalWrite(D5, LOW);  //SESSION 1 
//0
digitalWrite(pinA, LOW);  // THE FOUR HORIZONTAL LOADS LIGHT ON
digitalWrite(pinB, LOW);  // THE FOUR VERTICAL LOADS ON THE RIGHT LIGHT ON
digitalWrite(pinC, LOW);  // THE FOUR VERTICAL LOADS LIGHT ON THE LEFT
digitalWrite(pinD, LOW);  // THE FOUR HORIZONTAL LOADS LIGHT DOWN
digitalWrite(pinE, HIGH); // THE FOUR VERTICAL LOADS LIGHT LEFT LOW
digitalWrite(pinF, HIGH); // THE FOUR VERTICAL LOADS LIGHT ON ABOVE
digitalWrite(pinG, LOW);  // THE FOUR HORIZONTAL LOADS LIGHT IN THE MIDDLE
delay(1); // Wait for a second

digitalWrite(D1, LOW);  // SESSION 2 QUADRANT 1
digitalWrite(D2, HIGH); // SESSION 2 QUADRANT 2
digitalWrite(D3, HIGH); // SESSION 2 QUADRANT 3
digitalWrite(D4, HIGH); // SESSION 2 QUADRANT 4
//1
digitalWrite(pinA, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT ON
digitalWrite(pinB, LOW);  // THE FOUR VERTICAL LOADS ON THE RIGHT LIGHT ON
digitalWrite(pinC, LOW);  // THE FOUR VERTICAL LOADS LIGHT ON THE LEFT
digitalWrite(pinD, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT DOWN
digitalWrite(pinE, LOW);  // THE FOUR VERTICAL LOADS LIGHT LEFT LOW
digitalWrite(pinF, HIGH); // THE FOUR VERTICAL LOADS LIGHT ON ABOVE
digitalWrite(pinG, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT IN THE MIDDLE
delay(1); // Wait for a second

digitalWrite(D1, HIGH); // SESSION 3 QUADRANT 1
digitalWrite(D2, LOW);  // SESSION 3 QUADRANT 2
digitalWrite(D3, HIGH); // SESSION 3 QUADRANT 3
digitalWrite(D4, HIGH); // SESSION 3 QUADRANT 4
//2
digitalWrite(pinA, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT ON
digitalWrite(pinB, HIGH); // THE FOUR VERTICAL LOADS ON THE RIGHT LIGHT ON
digitalWrite(pinC, HIGH); // THE FOUR VERTICAL LOADS LIGHT ON THE LEFT
digitalWrite(pinD, LOW);  // THE FOUR HORIZONTAL LOADS LIGHT DOWN
digitalWrite(pinE, LOW);  // THE FOUR VERTICAL LOADS LIGHT LEFT LOW
digitalWrite(pinF, HIGH); // THE FOUR VERTICAL LOADS LIGHT ON ABOVE
digitalWrite(pinG, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT IN THE MIDDLE
delay(1); // Wait for a second

digitalWrite(D1, HIGH); // SESSION 4 QUADRANT 1
digitalWrite(D2, HIGH); // SESSION 4 QUADRANT 2
digitalWrite(D3, LOW);  // SESSION 4 QUADRANT 3
digitalWrite(D4, HIGH); // SESSION 4 QUADRANT 4
//3
digitalWrite(pinA, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT ON
digitalWrite(pinB, LOW);  // THE FOUR VERTICAL LOADS ON THE RIGHT LIGHT ON
digitalWrite(pinC, HIGH); // THE FOUR VERTICAL LOADS LIGHT ON THE LEFT
digitalWrite(pinD, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT DOWN
digitalWrite(pinE, LOW);  // THE FOUR VERTICAL LOADS LIGHT LEFT LOW
digitalWrite(pinF, HIGH); // THE FOUR VERTICAL LOADS LIGHT ON ABOVE
digitalWrite(pinG, HIGH); // THE FOUR HORIZONTAL LOADS LIGHT IN THE MIDDLE
delay(1); // Wait for a second
/*
