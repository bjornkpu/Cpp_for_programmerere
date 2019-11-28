template <class type1, class type2>
class Pair {
public:
  type1 first;
  type2 second;

  // En konstruktør som tar begge elementene som argumenter.
  Pair(type1 _first, type2 _second) {
    first = _first;
    second = _second;
  }

  // En operator for å legge sammen to par. Den skal lages ved elementvis summering.
  Pair operator+(const Pair &other) {
    Pair pair = *this;
    pair.first += other.first;
    pair.second += other.second;
    return pair;
  }

  // En operator for å finne ut om et par er større enn et annet par.
  // Her skal du sammenligne summen av elementene i hvert enkelt par.
  bool operator>(const Pair &other) {
    type1 sumThis = first + second;
    type1 sumOther = other.first + other.second;
    type1 difference = sumThis - sumOther;

    if (difference > 0) {
      return 1;
    } else {
      return 0;
    }
  }
};