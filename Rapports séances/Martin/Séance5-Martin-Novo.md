Durant cette séance j'ai pu tout d'abord modifier les derniers détails du code pour l'allumage de LED c'est à dire
régler le problème lorsque cela exécutait la méthode bonne_sequence() alors qu'il s'agissait d'une mauvaise séquence 
et que j'avais mis LVL à 20. À la suite de mauvaise_seqience() j'ai donc placé une valeur de retour avec exit() et un
entier saisi en paramètre qui permettra de ne pas continuer le programme après avoir appliqué la méthode mauvaise_sequence().
Je n'ai toujours pas trouvé de moyen d'inclure suite_couleur() dans mauvaise_sequence() mais le programme que j'ai écris
fonctionne correctement de toute manière. J'ai aussi ajouté des commentaires pour savoir ce que fait chaque méthode de mon
programme. Ensuite j'ai réalisé le montage que j'avais fait auparavant mais cette fois-ci pour 4 LED et je l'ai testé et 
tout était ok.

https://youtu.be/S0ecv390rws

Ce montage sera situé en dessous du support du Simon et des 4 gros boutons avec un espace réservé pour la carte arduino 
Par la suite j'ai donc pris 16 fils pour préparer mes soudures puisque je dois en faire 4 par bouton (2 sur les côtés pour 
les LED et 1 en haut et 1 en bas pour le bouton en lui-même). On peut voir que j'ai arrondis l'embout du fil pour pouvoir
bien le souder au bouton. La semaine prochaine il faudra que je réalise un maximum de soudages et que je trouve le meilleur 
moyen de lier chaque bouton au montage concernant l'allumage de LED.

![20230201_114543](https://user-images.githubusercontent.com/120502024/216137274-f85b5657-9e3b-432e-854c-8ee6be551409.jpg)
