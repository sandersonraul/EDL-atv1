#include "Rectangle.h"

Rectangle::Rectangle(int initialLength, int initialWidth)
{
  length = initialLength;
  width = initialWidth;
}

Rectangle::Rectangle(const Rectangle &rhs)
{
  length = rhs.length;
  width = rhs.width;
}

const Rectangle &Rectangle::operator=(const Rectangle &rhs)
{
  if (this != &rhs)
  {
    length = rhs.length;
    width = rhs.width;
  }
  return *this;
}

bool Rectangle::operator<(const Rectangle &rhs) const
{
  if (this == &rhs)
  {
    return false;
  }
  if (this->getArea() < rhs.getArea())
  {
    return true;
  }
  else
  {
    return false;
  }
  if (this->getPerimeter() < rhs.getPerimeter())
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Rectangle::read(std::ostream &out) const
{
  out << "Rectangle " << length << " , " << width;
}

int Rectangle::getLength() const
{
  return length;
}

int Rectangle::getWidth() const
{
  return width;
}

int Rectangle::getArea() const
{
  return length * width;
}

int Rectangle::getPerimeter() const
{
  return 2 * (length + width);
}
