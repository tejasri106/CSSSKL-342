/*
 *  Square.h
 *  Class-example
 *
 */

#ifndef SQUARE_H
#define SQUARE_H

template <typename T>
class Square {
	friend std::ostream& operator<<(std::ostream&, const Square<T>&);
public:
	Square & operator=(const Square&);
	bool operator<(const Square&);
	void setSize(T newSize);
	T getSize(void) const;

private:
	T theSize;
};

#endif
