#include "fonction-bienvenue.h"
#include <string>

int main(int argc, char* argv[]) {
    std::string message = "Bienvenue le monde !";
    int nb = 1;

    // Si au moins un argument est passé (le message)
    if (argc >= 2) {
        message = argv[1];
    }
    // Si un deuxième argument est passé (le nombre)
    if (argc >= 3) {
        nb = std::stoi(argv[2]); // conversion de la chaîne en entier
    }

    afficherBienvenue(message, nb);
    return 0;
}