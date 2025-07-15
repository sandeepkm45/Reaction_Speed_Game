int white1=12;
int white2=3;
int green=10;
int yellow=8;
int red=6;
int buzzer=4;
int switch1=13;
int switch2=2;

bool buttonPressed=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

  pinMode(white1,OUTPUT);
  pinMode(white2,OUTPUT);

  pinMode(buzzer,OUTPUT);

  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);

  randomSeed(analogRead(A0));

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(red,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(900);
  digitalWrite(red,LOW);
  // delay(1000);

  digitalWrite(yellow,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(900);
  digitalWrite(yellow,LOW);
  // delay(1000);

  digitalWrite(green,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(random(900,4000));
  digitalWrite(green,LOW);
  // delay(1000);

  digitalWrite(white1,HIGH);
  digitalWrite(white2,HIGH);
  delay(1000);
  digitalWrite(white1,LOW);
  digitalWrite(white2,LOW);

  while(buttonPressed==0){
    digitalWrite(white1,HIGH);
    digitalWrite(white2,HIGH);
    if (digitalRead(switch1)==0){
      buttonPressed=1;
      digitalWrite(white2,LOW);
    }
    else if (digitalRead(switch2)==0){
      buttonPressed=1;
      digitalWrite(white1,LOW);
    }
  }
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  // delay(900);
  delay(1500);
  digitalWrite(white1,LOW);
  digitalWrite(white2,LOW);
  buttonPressed=0;
  // digitalWrite(buzzer,HIGH);
  // digitalWrite(buzzer,LOW);
  // delay(1000);
}
