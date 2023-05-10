#include <iostream>
#include "intro.hpp"
// #include "map.h"

int main() {
    char passIntro;
    std::cout << "Regarder l'introduction ? (Y/N) : ";
    std::cin >> passIntro; // on demande si on veut regarder l'intro
    bool KILLMAIN = false;
    while (!KILLMAIN) {
        if (passIntro == 'Y' || passIntro == 'y') { // si oui
            intro(); // on la regarde
            // mapStart(); // puis on lance le jeu
            KILLMAIN = true; // si on quite le jeu on sort du while pour bien fermer le jeu
        } else if (passIntro == 'N' || passIntro == 'n') { // si non
            // mapStart(); // on lance directement le ju
            KILLMAIN = true; // si on quite le jeu on sort du while pour bien fermer le jeu
        } else { // si on donne une réponse invalide
            std::cout << "Regarder l'introduction ? (Y/N) : ";
            std::cin >> passIntro; // on redemande
        }
    }
}