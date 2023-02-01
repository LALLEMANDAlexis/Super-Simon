Pendant cette séance, l'objectif était d'associer un son à une couleur de led. 

Le travil est divisé en deux parties: l'effet sonore lorsque le Simon créer la séquence et l'effet sonore lorsqu'on appuie sur un bouton.
Ci-dessous, le code qui permet de jouer le bon son lorsque le Simon allume aléatoirement une nouvelle led. J'ai eu quelques difficultés lors de cette étape: en effet,
avant de créer une fonction qui compare ordre(le numéro du port actionné) et le son à jouer, j'avais simplement utilisé tone(speaker,son[ordre[i]-2],200) mais l'ordre ne variant pas pendant un même niveau, le son était le même pour toute les leds. En mettant ordre[i] en paramètre de son_led, cela nous permet de faire varier le son joué par rapport au port qui est actionné et donc d'obtenir la bonne fréquence pour chaque led.
<img width="247" alt="Capture d’écran 2023-02-01 121936" src="https://user-images.githubusercontent.com/120491290/216031365-f4ab85d6-52c6-4189-83ca-e253ac84d129.png">

Le deuxième code ci-dessous est celui qui associe le son au bouton pressé. Cette étape du code était beacoup plus facile à réaliser que la première puisque nous connaissons la led qui est allumée et il suffit donc de sélectionner la fréquence correspondant à la couleur de la led dans la liste des fréquences que j'ai appelé "son"(le code entier est également dans mon fichier des rapports de séance).

<img width="252" alt="son" src="https://user-images.githubusercontent.com/120491290/216033046-92ca2cce-9bcd-40be-8cae-c2df434f2642.png">

Voici la vidéo de la démonstration avec 2 leds, on entend bien la différence sonore entre le moment où la led rouge s'allume et lorsque la led verte s'allume.



https://user-images.githubusercontent.com/120491290/216128855-69e47c19-09d7-4c9c-8bb3-f4f2ba51fc27.MOV


