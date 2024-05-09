#ifndef SHAPE_H
#define SHAPE_H

class Shape{
private:
  int color;
public:
  Shape(int);
  void setColor(int);
  int getColor();
  virtual void Draw() = 0;
};
#endif // SHAPE_H
