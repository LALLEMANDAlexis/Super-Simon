const int MAX_LVL = 20;
const int LVL=1;
const int led_bleue = 2;
const int led_rouge = 3;
const int led_jaune = 4;
const int led_verte = 5;
const int bouton_bleu = 6;
const int bouton_rouge = 7;
const int bouton_jaune = 8;
const int bouton_vert = 9;
int randomLED;
int val = 0;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(bouton_bleu,INPUT);
  pinMode(bouton_rouge,INPUT);
  pinMode(bouton_jaune,INPUT);
  pinMode(bouton_vert,INPUT);
  pinMode(led_bleue,OUTPUT);
  pinMode(led_rouge,OUTPUT);
  pinMode(led_jaune,OUTPUT);
  pinMode(led_verte,OUTPUT);
  digitalWrite(led_bleue,HIGH);
  digitalWrite(led_rouge,HIGH);
  digitalWrite(led_jaune,HIGH);
  digitalWrite(led_verte,HIGH);

}

void loop() {
  
  sequence_hasard();

}

int sequence_hasard(){
  randomLED = random(2,5);
  Serial.println(randomLED);
  digitalWrite(randomLED,LOW);
  delay(1000);
  digitalWrite(randomLED,HIGH);
  delay(1000);
  
