Tout d’abord pendant les vacances j’ai réfléchi au problème des 3 boutons et je me suis rendu compte 
que ce n’était pas les foudres qui posaient soucis mais le sens de la LED à l’intérieur du bouton. 
La borne plus était à la place de la borne moins pour ces 3 boutons, le bouton vert quant à lui était 
dans le bon sens. J’ai donc pu tester l’allumage des boutons et tout était ok. Ensuite j’ai modifié 
légèrement le programme en ajoutant l’allumage des 4 boutons en même temps pour bonne_sequence() pour 
faire par la suite une musique de victoire. Après je remet le LVL à 1 pour recommencer une partie sans
avoir à téléverser et non sans avoir à réappuyer sur un bouton pour refaire une partie, une erreur de
ma part lors du rapport de la séance précédente. Durant cette séance, au niveau du programme j’ai tout
d’abord modifié le delay lors de la séquence et lorsqu’on appuie sur un bouton pour que la partie reste
le plus fluide possible. Ensuite j'ai pu modifier la condition de départ pour démarrer une partie qui sera
donc d'appuyer sur un des 4 boutons. J'ai aussi fait appel à la méthode suite_couleur à l'intérieur de la
méthode bonne_sequence pour faciliter le programme.Puis on a essayé de faire fonctionner l’allumage et le
son en même temps. Les deux montages ont donc été placé sur une seule plaque. Lors des premiers tests le
son était très faible puis après plusieurs recherches nous avons obtenu le résultat attendu en remplaçant
la résistance utile pour le son par un potentiomètre. Enfin j’ai remplacé la fonction exit() par return
pour permettre de ne pas quitter le programme tout en évitant d’exécuter la fin de la fonction et afin de
pouvoir recommencer une partie si je me trompe de séquence. Cette fin de semaine il faudra placer les
boutons dans le support ainsi que le montage et enfin fixer les boutons. 

Voici la démonstration du jeu lorsque MAX_LVL=3, avec une musique pour lancer le Simon et enfin il manque
juste la musique de victoire que doit faire Alexis : 
https://youtu.be/5BvcPAP3dJU
