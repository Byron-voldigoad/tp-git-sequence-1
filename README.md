 # Bienvenue
 Programme C++ qui affiche "Bienvenue le monde !" en utilisant la fonction
 `afficherBienvenue()`.

  ```sh
# Reconstruction complète du projet (nettoyage + compilation)
$ make rebuild
Fabrication du programme : bienvenue

# Suppression des anciens fichiers objets pour garantir une compilation propre
rm -f *.o

# Compilation des fichiers sources (.cpp) en fichiers objets (.o)
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp

# Édition de liens : assemblage des fichiers objets pour créer l'exécutable final
g++ -o bienvenue  bienvenue.o fonction-bienvenue.o

# Exécution du programme résultant
$ ./bienvenue
Bienvenue le monde !
 ```
 Le contenu d'un fichier source C++ :
 ```cpp
 #ifndef FONCTION_BIENVENUE_H
 #define FONCTION_BIENVENUE_H
 void afficherBienvenue();
 #endif // FONCTION_BIENVENUE_H
 ```
