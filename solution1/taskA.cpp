// Oppgave A
#include <iostream>

const int length = 5; // Lengden på perioden.
double temp;          // Temperaturen som leses inn.
int under = 0;        // Teller på antall under 10.
int mellom = 0;       // Teller på antall mellom 10 og 20.
int over = 0;         // Teller på antall over 20.

int main() {

  std::cout << "Du skal skrive inn " << length << " temperaturer." << std::endl;

  // Går gjennom tallene og inkrementerer variablene ettersom de er under, mellom, eller over.
  for (size_t i = 0; i < length; i++) {
    std::cout << "Temperatur nr " << i + 1 << ": ";
    std::cin >> temp;
    if (temp < 10) {
      under++;
    } else if (temp >= 10 and temp <= 20) {
      mellom++;
    } else {
      over++;
    }
  }

  // Skriver ut de tre variablene.
  std::cout << "Antall under 10 er " << under << std::endl;
  std::cout << "Antall mellom 10 og 20 er " << mellom << std::endl;
  std::cout << "Antall over 20 er " << over << std::endl;
}