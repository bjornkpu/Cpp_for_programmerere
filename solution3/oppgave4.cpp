#include <iostream>

using namespace std;

int main() {
  // oppgave a
  string word1, word2, word3;
  cin >> word1;
  cin >> word2;
  cin >> word3;

  // Oppgave b
  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << sentence << endl;

  // Oppgave c
  cout << "word1: " << word1.size() << ", word2: " << word2.size() << ", word3: " << word3.size() << ", sentence: " << sentence.size() << endl;

  // Oppgave d
  string sentence2 = sentence;

  // Oppgave e
  if (sentence2.size() >= 12) {
    sentence2.replace(9, 3, "xxx");
  }
  cout << sentence << endl;
  cout << sentence2 << endl;

  // Oppgave f
  string sentence_start;
  if (sentence.size() >= 5) {
    sentence_start = sentence.substr(0, 5);
  }
  cout << sentence << endl;
  cout << sentence_start << endl;

  // Oppgave g, uvanlig metode men jeg ville prøve one-line if-setninger
  cout << "The sentence does "
       << ((sentence.find("hallo") != string::npos) ? "" : "not ")
       << "contain the word \"hallo\"!" << endl;

  // oppgave h
  int antall = 0;
  for (size_t i = 0; i < sentence.size(); i++) {
    if (sentence.substr(i, 2) == "er") {
      antall++;
    }
  }
  cout << "det finnes " << antall << " forekomster av strengen \"er\" i sentence-strengen" << endl;
}