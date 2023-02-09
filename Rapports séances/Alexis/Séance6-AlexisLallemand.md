

J'ai commencé cette séance par corriger les problèmes par rapport aux sons des leds. Le son était composé d'une seule fréquence, le son était assez désagréable et le Simon 
n'avait pas l'atout sonore souhaité. Pour rendre les sons des leds plus agréables, j'ai donc décomposé l'effet sonore en deux fréquences qui se suivent pour créer un accord 
plus musical que la fréquence simple dans le code précédent.
L'exemple de l'accord de fréquence réalisé pour la led bleue:
<img width="242" alt="Code son bleu" src="https://user-images.githubusercontent.com/120491290/217789063-dbd2045b-efc8-4a57-8bfb-0dd5ae3f8d4e.png">

Ensuite, l'étape suivante sur le code du son est de créer une mélodie de début de partie qui serait donc jouée dès qu'un joueur appuie sur le bouton pour commencer la 
partie. 
La première intention était de la télécharger et de la faire jouer à l'aide d'un lecteur mp3. Cependant, lorsque le mp3 était branché, je n'arrivais pas à contrôler l'activation du son au bon timing: 
soit la mélodie était jouée en boucle si on la mettait dans la boucle if(LVL==1) et le reste du code ne s'exécute plus, soit la mélodie joue dès qu'on appuie sur le bouton mais 
les effets sonores à l'allumage des leds ne sont plus joués.

Enfin, j'ai voulu tout de même savoir si la mélodie pouvait marcher avec la fonction tone() dans le bon timing et si on branche simplement le haut parleur sans le lecteur mp3.
J'ai donc réalisé une mélodie de début et de fin de partie qui fonctionne bien, même si il était difficile de coder une musique qui n'est pas hachée avec la fonction tone.
Finalement, en jouant sur les delay et la longueur des notes, on obtient:


https://user-images.githubusercontent.com/120491290/217812874-a74fae52-118e-4213-adc2-802c995a65b0.mov


