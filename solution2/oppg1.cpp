/*
 Oppgave A:
 
 Tegn opp variablene med innhold:
 
 100  i  3
 101  j  5
 102  p  ->100
 103  q  ->101
 
 
 Lag et lite program som skriver ut både adressen til, og innholdet av disse fire variablene.
 */
#include <iostream>

int main() {

  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  std::cout << "Variable i: value = " << i << ", address = " << &i << std::endl;
  std::cout << "Variable j: value = " << j << ", address = " << &j << std::endl;
  std::cout << "Variable p: value = " << p << ", address = " << &p << std::endl;
  std::cout << "Variable q: value = " << q << ", address = " << &q << std::endl;

  /* Stemmer utskriften med tegningen din?
   * 
   out:
   Variable i: value = 3, address = 0x7ffffaad8680
   Variable j: value = 5, address = 0x7ffffaad8684
   Variable p: value = 0x7ffffaad8680, address = 0x7ffffaad8688
   Variable q: value = 0x7ffffaad8684, address = 0x7ffffaad8690
   
   Ja.
  
  
  Oppgave B:
  Hva blir skrevet ut når følgende programbit utføres?
  Tegn gjerne opp variablene etter hver enkelt setning.
  
  Går ut ifra at jeg skal evaluere *p og *q og ikke p og q siden disse er
  minnelokasjoner og vil variere fra gang til gang.
  
  init:
  *p=3  *q=5
  
  *p = 7;       (p=7  q=5)
  
  *q += 4;      (p=7  q=9)
  
  *q = *p + 1;  (p=7  q=8)
  
  p = q;        (p=8  q=8)
  
  cout << *p << " " << *q << endl;
  Skriver ut: 8 8
  
  Utvid programmet fra a), og sjekk at det stemmer med tegningen din.
  */
  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;
  std::cout << *p << " " << *q << std::endl;
}
