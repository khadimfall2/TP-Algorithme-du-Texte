#include <iostream>

using namespace std;

void affichage(string u) {
  /* code */
}

int main(int argc, char const *argv[]) {
  /* code */
  static string u, v;

  cout << "Entrez deux mots à miroiter" << '\n';
  cin >> u;

  affichage(u);

  std::cout << u << v << '\n';
  return 0;
}
