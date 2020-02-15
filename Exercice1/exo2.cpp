#include <iostream>
#include <cstring>

using namespace std;

/* Fonction pour echanger des valeurs entre deux variables */
void swap(char *str, int i, int j)
{
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}

void affichage(char *motMiroir) {
    /* J'affect la taille du tableau à la variable taille */
    int taille = strlen(motMiroir);

    printf("Le miroir de %s\n", motMiroir);

    /* Ici je parcours le tableau pour en faire swaper les élements */
    for (size_t i = 0; i < taille / 2; i++) {
      /* i prend la  valeur courante, et taille=longeur du tableau */
      swap(motMiroir, i, taille - i - 1);
    }
    printf("est %s\n", motMiroir);
}

int main(int argc, char const *argv[]) {
  /* code */
  char motMiroir[20];
  std::cout << "Entrer le mot à miroiter" << '\n';
  std::cin >> motMiroir;

  affichage(motMiroir);

  return 0;
}
