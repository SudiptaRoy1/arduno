
const int LED0 = 0; // LED connected to digital pin 
const int LED1 = 1;
const int LED2 = 2;
const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;
const int LED6 = 6;
const int LED7 = 7;
const int LED8 = 8;
const int LED9 = 9;
const int LED10 = 10;
const int LED11 = 11;

int val = 0; 

void allLedsHigh(){
  digitalWrite(LED0, HIGH); //5v
  digitalWrite(LED1, HIGH); //5v
  digitalWrite(LED2, HIGH); //5v
  digitalWrite(LED3, HIGH); //5v
  digitalWrite(LED4, HIGH); //5v
  digitalWrite(LED5, HIGH); //5v
  digitalWrite(LED6, HIGH); //5v
  digitalWrite(LED7, HIGH); //5v
  digitalWrite(LED8, HIGH); //5v
  digitalWrite(LED9, HIGH); //5v
  digitalWrite(LED10, HIGH); //5v
  digitalWrite(LED11, HIGH); //5v
  
}


void allLedsLow(){
  digitalWrite(LED0, LOW); 
  digitalWrite(LED1, LOW); 
  digitalWrite(LED2, LOW); 
  digitalWrite(LED3, LOW); 
  digitalWrite(LED4, LOW); 
  digitalWrite(LED5, LOW); 
  digitalWrite(LED6, LOW); 
  digitalWrite(LED7, LOW); 
  digitalWrite(LED8, LOW); 
  digitalWrite(LED9, LOW); 
  digitalWrite(LED10, LOW); 
  digitalWrite(LED11, LOW); 
  
}

void flashingAll(){
  allLedsHigh();
  delay(500);
  allLedsLow();
  delay(100);
}

void oneAtATime(){
  
  int x;
  
  for ( x = 0; x <= 11; x++ ) {
    
    val = analogRead(0); //val max 1023
    
    digitalWrite(x, LOW);   
    delay(10+val);   
    digitalWrite(x, HIGH); //5v
    //delay(100);
 
 
  }
  
  
  
}


void setup() {
  // put your setup code here, to run once:
  
 pinMode(LED0, OUTPUT);   // sets the digital pin as output
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
 pinMode(LED4, OUTPUT);
 pinMode(LED5, OUTPUT);
 pinMode(LED6, OUTPUT);
 pinMode(LED7, OUTPUT);
 pinMode(LED8, OUTPUT); 
 pinMode(LED9, OUTPUT); 
 pinMode(LED10, OUTPUT); 
 pinMode(LED11, OUTPUT); 
  
 allLedsHigh(); 
  
}




void loop() {
  // put your main code here, to run repeatedly:
  //flashingAll();
  oneAtATime();
  //allLedsHigh();
}
