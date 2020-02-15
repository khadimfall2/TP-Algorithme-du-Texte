#include <iostream>

using namespace std;

void affichage(string u, string v) {
  /* code */
  cout << u + v << '\n';
}

int main(int argc, char const *argv[]) {
  /* code */
  string u, v;

  cout << "Entrez deux mots à contaner" << '\n';
  cout <<  "Le premier mot" << '\n';
  cin >> u;
  cout <<  "Le deuxième mot" << '\n';
  cin >> v;
  cout << "Leur concatenantion : " ;
  affichage(u, v);

  return 0;
}
