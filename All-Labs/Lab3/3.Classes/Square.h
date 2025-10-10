/*
 *  Square.h
 *  Class-example
 *
 */

#ifndef SQUARE_H
#define SQUARE_H

class Square {
public:
   void setSize(int newSize);
   int getSize(void) const;
   Square& operator = (const Square&); // Square class doesn't need a overload cosntructor because it only has an int member, and the default assignment works fine.
   bool operator<(const Square& other) const;

private:
   int theSize;
   
};

#endif
