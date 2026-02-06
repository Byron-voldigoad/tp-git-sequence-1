# TP – Gestion des Configurations

## Programme **Bienvenue**

Ce projet est un programme **C++** simple qui affiche un message personnalisé un nombre de fois défini par l'utilisateur. Il illustre l'utilisation :

* d'un **Makefile**
* des **arguments en ligne de commande**
* des **paramètres par défaut** en C++

---

## 1. Compilation

Le projet utilise un **Makefile** pour automatiser la compilation.

### Commande

```bash
make rebuild
```

### Détail des étapes exécutées

```bash
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
```

---

## 2. Exemples d’utilisation (v2.0)

Le programme accepte désormais des **arguments en ligne de commande**.

### Sans argument (valeurs par défaut)

```bash
./bienvenue
```

Résultat :

```text
Bienvenue le monde !
```

---

### Avec uniquement le message

```bash
./bienvenue Bienvenue
```

Résultat :

```text
Bienvenue
```

---

### Avec le message et le nombre de répétitions

```bash
./bienvenue Bienvenue 2
```

Résultat :

```text
Bienvenue
Bienvenue
```

---

### Avec un message contenant des espaces

Le message doit être entouré de guillemets.

```bash
./bienvenue "Bonjour le monde" 3
```

Résultat :

```text
Bonjour le monde
Bonjour le monde
Bonjour le monde
```

---

## 3. Détails techniques

### Prototype de la fonction

La fonction utilise des **paramètres par défaut** afin de permettre une utilisation flexible sans arguments obligatoires.

```cpp
#ifndef FONCTION_BIENVENUE_H
#define FONCTION_BIENVENUE_H

#include <string>

void afficherBienvenue(std::string message = "Bienvenue le monde !", int nbAffichage = 1);

#endif
```

---

## 4. Objectifs pédagogiques

* Comprendre la compilation avec **Makefile**
* Manipuler les **arguments en ligne de commande** (`argc`, `argv`)
* Utiliser des **paramètres par défaut** en C++
* Structurer un projet C++ en plusieurs fichiers

---

## 5. Auteur

TP réalisé dans le cadre du module **Gestion des Configurations**.
