#include "Box.h"
#include<iostream>

void Box::setLength(double l)
{
  length=l;
}
void Box::setWidth(double w);
{
  width=w;
}
void setHeight(double h);
{
  height=h;
}
int Box:: getLength(double l);
{
  return length;
}
int Box:: getWidth(double w)
{
  return width;
}
int Box:: getHeight(double h)
{
  return height;
}
// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  return length * width * height;
}
