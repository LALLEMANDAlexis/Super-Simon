Cette semaine, nous avons récupéré notre pièce imprimé en 3D. Comme dit dans les rapports précédents, cette pièce est essentielle pour tenir les boutons et pour cacherle montage électrique.
En posant les boutons sur leur emplacement, qui devront par la suite être fixés, le visuel est le suivant:

![IMG-0223](https://user-images.githubusercontent.com/120491290/213440159-3275589b-6947-4e86-aa72-ee5c8c1d2884.jpg)

Ma partie de modélisation étant terminé, j'ai commencé à réfléchir à la partie sonore du Simon.
L'objectif est d'associé un son différent à chaque couleur de bouton différent. De plus, j'aimerais ajouter une mélodie au lancement du jeu et à la fin du jeu.
Cependant, en pensant à la manière de réaliser ces deux chose différentes, je me suis aperçu que le plus facile serait sans doute de réaliser les mélodies de début et de fin de partie 
grâce à un lecteur mp3, mais qu'il serait également plus pratique de créer les sons associé à chaque couleur de buzzer directement via la carte arduino qui pourra ordonner 
au haut parleur la bonne fréquence via la fonction tone.
Ainsi je devrais donc travailler avec deux haut parleur au lieu d'un.
Enfin, après avoir fait des recherches sur la fonction tone, j'ai réalisé un premier test de la fonction tone mais celui-ci n'a pas fonctionné, le haut parleur ne faisant aucun bruit.
L'amplificateur n'étant pas au niveau de son le plus faible, c'est sans doute mon utilisation de la fonction tone qui n'était pas correct.
Mon objectif pendant la semaine de vacances sera donc de faire des tests supplémentaires de la fonction tone pour pouvoir ainsi commencer la prochaine séance sans difficulté et donc 
me concentrer sur la synchronisation du son et de l'allumage des leds et sur la reconnaissance de chaque led pour réaliser le bon son.
