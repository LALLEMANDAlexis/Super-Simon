Séance 1 :

Lors de cette première séance j'ai fais des recherches sur les différents composants dont nous aurons besoin pour notre Simon. 
Il nous faudra donc 4 LED, 4 boutons poussoirs, du pvc métériau qui va servir à mettre de la lumière au niveau des boutons mais 
aussi un mini haut parleur pour diffuser tous les sons associé à chaque couleur. Après avoir établi cette liste je me suis lancé 
dans la création du code pour les LED. J'ai commencé par réfléchir à un moyen d'obtenir une séquence aléatoire avec 4 LED avec 
un petit délai entre chaque allumage. J'ai initialisé les LED, les boutons et la variable randomLED et d'autres données qui serviront 
plus tard  puis ensuite au niveau du void setup avec surtout randomSeed(analogRead(0)) qui va permettre d'obtenir des séquences 
aléatoires différentes et d'éviter d'obtenir la même à chaque fois. Enfin au niveau du void loop j'ai donc insérer une méthode qui 
s'appelle sequence_hasard qui va choisir un nombre au hasard entre l'une des 4 sorties associé au LED et allumer la LED qui possède 
ce nombre comme sortie pendant 1 seconde, puis l'éteindre et réattendre 1 seconde.
