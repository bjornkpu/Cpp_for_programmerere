#include <iostream>
using namespace std;

//Finn ting som kan gå galt i følgende programbit:
int main() {

  char text[5];          // setter av en minnelokasjon med plass til 5 char etter hverandre
  char *pointer = text;  // setter en peker som peker på det første elementet i text
  char search_for = 'e'; // setter en 'e' inn i variabelen search_for
  cout << *pointer << " " << pointer << " " << search_for << endl;
  cin >> text;                     // tar inn en input fra terminalen og lagrer den i første element i text
  while (*pointer != search_for) { //kjør så lenge første element i text ikke er en 'e'
    *pointer = search_for;         // setter første element i text til 'e'
    cout << *pointer << " " << pointer << " " << search_for << endl;
    pointer++; // inkrementerer pekeren med 1
    cout << "pointer++ " << pointer << endl;
  }

  /*
   om den første inputen er e exiter vi programmet
   om den ikke er setter vi den til e for deretter å gå frem en i minnet og effektivt slette første element
   Dette går i loop til vi finner en e og deretter avslutter.
   
   
   streng med e mindre enn tabellengden:
     kommer til e-en og aslutter loopen og returnerer 0
     
   streng med e lengere enn tabellengden:
     kommer til e-en og sender feilmelding:
       *** stack smashing detected ***: <unknown> terminated
       Aborted (core dumped)
       returnerte 134
   
   streng uten e innenfor eller utenfor:
     looper med å sette til e og hoppe videre helt til vi er ved enden av
     strengen og vil fortsette utover minneområdet
     Den vil loope med *pointer, pointer, og search_for = e og pointer++ vil peke til verdien
     etter e som er neste plasering i minnet. til slutt vil feilmeldingen vise:
       *** stack smashing detected ***: <unknown> terminated
       Aborted (core dumped)
     
     i andre tilfeller vil programmet gå i evig loop og crashe juci, ser ikke møsteret.
   
   */
}
