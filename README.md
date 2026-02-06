```sh

Reconstruction du projet
$ make rebuild Fabrication du programme : bienvenue

Exemple d'exécution avec les paramètres par défaut (v1.3)
$ ./bienvenue Bienvenue le monde ! ```

## Prototype de la fonction Le fichier header définit désormais des paramètres par défaut pour le message et le nombre d'affichages :

```cpp #ifndef FONCTION_BIENVENUE_H #define FONCTION_BIENVENUE_H #include <string>

// v1.3 : Support du nombre d'affichages void afficherBienvenue(std::string message = "Bienvenue le monde !", int nbAffichage = 1);

#endif // FONCTION_BIENVENUE_H ```