#include <iostream>
#include <cstring>

using namespace std;

void swap(char *str, int i, int j)
{
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}

int main(void)
{
    char str[20];
    printf("entrer le mot miroir svp\n");
    std::cin >> str;
    int len = strlen(str);
    printf("Le miroir de %s\n", str);
    for(int i = 0; i < len / 2; i++)
        swap(str, i, len - i - 1);
    printf("est %s.\n", str);
    return 0;
}


void affichage(char *motMiroir) {

}

int main(int argc, char const *argv[]) {
  /* code */
  char motMiroir[20];
  std::cout << "Entrer le mot à miroiter" << '\n';
  std::cin >> motMiroir;

  affichage(motMiroir);

  return 0;
}
