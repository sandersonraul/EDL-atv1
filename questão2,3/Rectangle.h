#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class Rectangle
{
public:
  explicit Rectangle(int initialLength = 10, int initialWidth = 5);

  Rectangle(const Rectangle &rhs);

  const Rectangle &operator=(const Rectangle &rhs);

  bool operator<(const Rectangle &rhs) const;

  void read(std::ostream &out = std::cout) const;

  int getLength() const;
  int getWidth() const;
  int getArea() const;
  int getPerimeter() const;

private:
  int length;
  int width;
};

#endif