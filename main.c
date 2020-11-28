#include "manip.c"


char c[] = "La structure struct iphdr que nous avons vue au prealable peut etre utilisee pour creer des paquets IP. Elle doit etre remplie de la maniere suivante.";


int main(int argc, char const *argv[]){

    affichage(c, sizeof(c));

    return 0;
}

