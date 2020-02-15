#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */

  int n;
  std::cout << "Entrer la taille des mots que tu veux" << '\n';
  std::cin >> n;

  char tableau[n] = "";

  for (int i = 0; i < n; i++) {
    /* code */
    tableau[i] = 'A';
  }

  std::cout << tableau << endl;

  return 0;
}
