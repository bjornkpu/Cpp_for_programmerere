#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char *line = nullptr;               // eller char *line = 0;
  strcpy(line, "Dette er en tekst");  //strcpy() kopierer fra 2. til 1.argument,
 }
 
 /*
 Her setter vi først av en minnealokasjon som peker til nullptr (eller 0, som begge er det samme).
 Dette er en 'pointer literal' av typen std::nullptr_t. Denne er en prvalue,
 noe som betyr at du ikke kan adressen fra den ved å bruke &.
 
 Så vi prøver altså å peke på NULL som i C++ ikke er mulig. Denne har ingen adresse.
 Vi får med en gang en "Segmentation fault (core dumped)" og kommer ikke så langt som strcpy.
 */