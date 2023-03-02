/*Déclaration des constantes et des variables utiles pour le déroulement du jeu*/
const int MAX_LVL = 3;/*Ce niveau peut être modifié pour augmenter ou diminuer la difficulté*/
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

/*Les boutons sont les entrées, les LED sont les sorites et au départ chaque LED est éteinte*/
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
  /*Condition de démarrage du jeu qui sera dans ce cas : appuyer sur un des 4 boutons*/
  if (digitalRead(bouton_bleu)==LOW || digitalRead(bouton_rouge)==LOW || digitalRead(bouton_jaune)==LOW || digitalRead(bouton_vert)==LOW){
    suite_couleur();
    partie_simon();
  }
}

/*Cette méthode va générer au hasard MAX_LVL valeurs comprise entre 2 et 5*/
void sequence_hasard(){
 randomSeed(analogRead(0));
 for (int i=0; i<MAX_LVL; i++){
   ordre[i] = random(2,6);
 }
}

  
 
/*Cette méthode va reproduire la séquence de couleur au faire et à mesure*/
void suite_couleur(){
   for (int i=0; i<LVL; i++){
      digitalWrite(ordre[i],HIGH);
      delay(600);
      digitalWrite(ordre[i],LOW);
      delay(600);
      digitalWrite(ordre[i],HIGH);
      delay(600);
    }

  }

/*Cette méthode va distinguer chaque possibilité en fonction du bouton auquel on appuie et si c'est 
une bonne ou mauvaise couleur*/ 
void partie_simon(){
for(int j=0; j<MAX_LVL; j++){ 
  for (int i=0; i<LVL; i++) {
    drapeau = 0;
    while (drapeau == 0) {
      if (digitalRead(bouton_bleu) == LOW) {
        digitalWrite (led_bleue, LOW);
        own_follow[i] = 2;
        drapeau = 1;
        delay(600);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
          return;
        }
        digitalWrite (led_bleue,HIGH);
      }
      if (digitalRead(bouton_rouge) == LOW) {
        digitalWrite (led_rouge, LOW);
        own_follow[i] = 3;
        drapeau = 1;
        delay(600);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
          return;
        }
        digitalWrite (led_rouge,HIGH);
      }
      
      if (digitalRead(bouton_jaune) == LOW) {
        digitalWrite (led_jaune, LOW);
        own_follow[i] = 4;
        drapeau = 1;
        delay(600);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
          return;
        }
        digitalWrite (led_jaune,HIGH);
      }
      
      if (digitalRead(bouton_vert) == LOW) {
        digitalWrite (led_verte, LOW);
        own_follow[i] = 5;
        drapeau = 1;
        delay(600);
        if (own_follow[i] != ordre[i]) {
          mauvaise_sequence();
          return;
        }
        digitalWrite (led_verte,HIGH);
      }
      
    }
    
  }
    bonne_sequence();
 }
}

/*Cette méthode va éteindre la LED qui ne correspond pas à la bonne couleur et ensuite allumer d'un
coup les 4 LED puis les éteindre et enfin remettre le LVL à 1*/
void mauvaise_sequence(){
    digitalWrite(led_bleue,HIGH);
    digitalWrite(led_rouge,HIGH);
    digitalWrite(led_jaune,HIGH);
    digitalWrite(led_verte,HIGH);
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
    LVL=1;
    
}

/*Cette méthode incrémente le LVL de 1 et va reproduire la même séquence aléatoire en y ajoutant une 
couleur parmois les 4 au hasard mais aussi allumer les 4 LED une fois que les MAX_LVL combaisons ont 
bien réussies*/
void bonne_sequence(){
      if (LVL < MAX_LVL+1){
         LVL ++;
      }

      if (LVL==MAX_LVL+1){
        digitalWrite(led_bleue,HIGH);
        digitalWrite(led_rouge,HIGH);
        digitalWrite(led_jaune,HIGH);
        digitalWrite(led_verte,HIGH);
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
        LVL=1;
        
      }

      else{
        suite_couleur();
      }
      
}

    
  
