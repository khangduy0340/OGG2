#include <iostream>
#include <string>

#include "Orchestra.h"
using namespace std;

int main() {
  Orchestra Ade(6);
  Musician Mus[6] = {Musician("guitar", 4), Musician("piano", 2),
                     Musician("flute", 5),  Musician("trumpet", 6),
                     Musician("cello", 10), Musician("violin", 5)};

  for (int i = 0; i < 6; i++) {
    cout << "Add musicians in orchestra " << endl;
    cout << Ade.get_current_number_of_members() << endl;
    cout << Ade.add_musician(Mus[i]) << endl;
    cout << endl;
  }

  cout << "piano in orchestra : " << Ade.has_instrument("piano") << endl;
  cout << "violin in orchestra : " << Ade.has_instrument("violin") << endl;
  Musician *members = Ade.get_members();
  cout << "Musician's Instrument and their Experience in orchestra : " << endl;
  for (int i = 0; i < Ade.get_current_number_of_members(); i++)
    cout << members[i].get_instrument() << " " << members[i].get_experience()
         << endl;
  delete (members);
  return 0;
}