Durant cette séance j'ai pu apporter plusieurs modifications à mon programme. Tout d'abord j'ai corrigé mon erreur 
sur la variable LVL que j'avais qualifié de constante. Ensuite j'ai pour l'instant décidé que la partie commencerait
si j'appuie sur le bouton bleu condition que je peux bien évidemment changer si je le souhaite. J'ai rajouté en ce
qui concerne la méthode partie_simon() une partie de code qui constitue une autre possibilité que le bouton bleu 
c'est à dire un autre bouton le rouge puisque j'ai en effet tester l'allumage avec les 2 LED la bleue et la rouge
et pour cela j'ai réalisé le montage qui peut à la fois allumer des LED mais aussi appuyer sur des boutons poussoirs
ainsi j'ai repris le montage qu'avait fait Alexis mais cette fois-ci avec 2 LED. J'ai par la suite vérifier que les 
méthodes sequence_hasard() et suite_couleur() fonctionnait bien ce qui était le cas. Ensuite j'ai pu construire la 
méthode bonne_sequence() qui va incrémenter le LVL de 1 mais aussi répéter la même séquence en y ajoutant une couleur 
au hasard parmis le bleu, le rouge, le vert et le jaune. Cette méthode se situera à l'intérieur d'une boucle for dans 
la méthode partie_simon() qui va permettre de pouvoir continuer le jeu mais à l'extérieur de la 2ème boucle for puisque 
celle-ci distingue tous les cas qui mènerait à une mauvaise séquence. J'ai dû adapter les délais pour qu'il y ait un 
rythme régulier entre les allumages et le test de cette méthode est validé. Enfin j'ai construis la méthode 
mauvaise_sequence() qui devrais allumer toutes les LED d'un coup pour faire comprendre au joueur qu'il a perdu. Mais quand 
je la teste cela continuait la séquence après avoir tout allumé. J'ai supposé que cela appliqué la méthode bonne_sequence 
en plus j'ai donc mis le LVL à 20 provisoirement pour éviter de rentrer dans bonne_sequence. Je suppose qu'il existe un 
équivalent de "break" pour arrêter le programme à la fin de la méthode mauvaise_sequence(). Il faudra à la prochaine séance 
que je fasse le test avec les 4 LED, que je trouve une solution à ce problème et que je commence à réfléchir au montage 
éléctrique.

![20230111_112525](https://user-images.githubusercontent.com/120502024/212113071-71682c98-4c30-4aee-8be3-7e8a1c55712f.jpg)
 
