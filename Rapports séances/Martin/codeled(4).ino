const int MAX_LVL = 20;
int LVL=1;
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
 
  if (digitalRead(bouton_bleu)==LOW){
    suite_couleur();
    partie_simon();
  }
}

void sequence_hasard(){
 randomSeed(analogRead(0));
 for (int i=0; i<MAX_LVL; i++){
   ordre[i] = random(2,4);
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
for(int j=0; j<MAX_LVL; j++){ 
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
      if (digitalRead(bouton_rouge) == LOW) {
        digitalWrite (led_rouge, LOW);
        own_follow[i] = 3;
        drapeau = 1;
        delay(1000);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
        }
        digitalWrite (led_rouge,HIGH);
      }
      
      if (digitalRead(bouton_jaune) == LOW) {
        digitalWrite (led_jaune, LOW);
        own_follow[i] = 4;
        drapeau = 1;
        delay(1000);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
        }
        digitalWrite (led_jaune,HIGH);
      }
      
      if (digitalRead(bouton_vert) == LOW) {
        digitalWrite (led_verte, LOW);
        own_follow[i] = 5;
        drapeau = 1;
        delay(1000);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
        }
        digitalWrite (led_verte,HIGH);
      }
      
    }
  }
    bonne_sequence();
}
}

void mauvaise_sequence(){
    delay(1000);
    digitalWrite (led_bleue,LOW);
    digitalWrite (led_rouge,LOW);
    digitalWrite (led_jaune,LOW);
    digitalWrite (led_verte,LOW);
    delay(1000);
    digitalWrite(led_bleue,HIGH);
    digitalWrite(led_rouge,HIGH);
    digitalWrite(led_jaune,HIGH);
    digitalWrite(led_verte,HIGH);
    LVL=20;
    
}

void bonne_sequence(){
      if (LVL < MAX_LVL){
         LVL ++;
      }
      for (int i=0; i<LVL; i++){
          digitalWrite(ordre[i],HIGH);
          delay(1000);
          digitalWrite(ordre[i],LOW);
          delay(1000);
          digitalWrite(ordre[i],HIGH);
          delay(100);
      } 
      
      
      
}

    
  
