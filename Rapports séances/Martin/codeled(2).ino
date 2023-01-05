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
int ordre[MAX_LVL];
int own_follow[MAX_LVL];
int drapeau = 0;

void setup() {
  Serial.begin(9600);
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
  if (LVL==1){
      sequence_hasard();
  }
  if ((digitalRead(bouton_bleu)==HIGH && digitalRead(bouton_vert)==HIGH)){
      suite_couleur();
      partie_simon();
  }
  

}

void sequence_hasard(){
  randomSeed(analogRead(0));
  for (int i=0; i<MAX_LVL; i++){
    ordre[i] = random(2,6);
  }
}

void suite_couleur(){
  for (int i=0; i<LVL; i++){
    digitalWrite(ordre[i],LOW);
    delay(1000);
    digitalWrite(ordre[i],HIGH);
    delay(1000);
}

}

void partie_simon(){
  for (int i=0; i<LVL; i++) {
    drapeau = 0;
    while (drapeau == 0) {
      if (digitalRead(bouton_bleu) == LOW) {
        digitalWrite (led_bleue, LOW);
        own_follow[i] = 2;
        drapeau = 1;
        delay(1000);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
        }
        digitalWrite (led_bleue,HIGH);
      }
     }
    }
    bonne_sequence();
   }

void mauvaise_sequence(){
  
}

void bonne_sequence(){
  
}

    
  
