#include <iostream>
#include "Square.h"
#include "SquareContainer.h"

using namespace std;

int main (int argc, char * const argv[]) {
   SquareContainer c;
   
   for (int i = 0; i < 20; i++) {
      Square s;
      s.setSize(i);
      c.insertNext(s);
   }
   SquareContainer d(c); // copy
   SquareContainer e =   d; // assignment

   try {
      for (int i = 0; i < 21; i++) {
         cout << "Square " << i << " size is " 
         << c.deleteLast().getSize() << endl;
      }
   }
   catch (SquareContainerException sqe) {
      cerr << sqe.what();
   }

   Square s1, s2;
   s1.setSize(3);
   s2.setSize(5);
   
   
   
    return 0;
}
