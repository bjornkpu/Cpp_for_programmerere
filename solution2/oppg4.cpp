/*
 int a = 5;       //initiering
 int &b;          //prøver å være en referanse, antagelig til a
 int *c;          // setter opp en peker
 c = &b;          //peker til b (som er en referanse til a)
 *a = *b + *c;    //går ut ifra at den vil sette a til b+c. fjerner da * før a og  b
 &b = 2;          // tolker som at vi setter b/a til 2 tar da bort &
 
 Vi må da endre til dette:
 */
#include <iostream>
int main() {
  int a = 5;
  int &b = a;
  int *c;
  c = &b;
  a = b + *c;
  b = 2;
}