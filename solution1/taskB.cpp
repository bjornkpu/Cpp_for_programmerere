// Oppgave B

#include <fstream>
#include <iostream>

const int length = 5;                       //Hvor mange tall du leser fra filen.
const char filename[] = "temperaturer.txt"; // Navnet på filen du leser fra.
double temperatures[length];                //tabellen temperaturene skrives til.
int under = 0;                              // Teller på antall under 10.
int mellom = 0;                             // Teller på antall mellom 10 og 20.
int over = 0;                               // Teller på antall over 20.

void read_temperatures(double temperatures[], int length);

int main() {

  read_temperatures(temperatures, length);

  for (int i = 0; i < length; i++) {
    if (temperatures[i] < 10) {
      under++;
    } else if (temperatures[i] >= 10 and temperatures[i] <= 20) {
      mellom++;
    } else {
      over++;
    }
  }
  std::cout << "Antall under 10 er " << under << std::endl;
  std::cout << "Antall mellom 10 og 20 er " << mellom << std::endl;
  std::cout << "Antall over 20 er " << over << std::endl;
}

//Funksjonen skal åpne filen, lese inn temperaturene og lagre dem i tabellen temperatures, og endelig lukke filen.
void read_temperatures(double temperatures[], int length) {
  std::ifstream file;
  file.open(filename);
  if (!file) {
    std::cout << "Feil ved åpning av innfil." << std::endl;
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < length; i++) {
    file >> temperatures[i];
  }

  file.close();
}
