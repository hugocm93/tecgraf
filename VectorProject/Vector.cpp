/* 
 * File:   Vector.cpp
 * Author: treinamento
 * 
 * Created on September 4, 2015, 10:29 AM
 */

#include "Vector.h"

Vector::Vector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
    
}

double Vector::getX()
{
    return this->x;
}

double Vector::getY()
{
     return this->y;
}

double Vector::getZ()
{
     return this->z;
}
    
Vector* Vector::operator +(const Vector &b)
{
   Vector *newV = new Vector(this->x + b.x,this->y + b.y,this->z + b.z);
   
   return newV;
    
}

Vector* Vector::operator -(const Vector &b)
{
    Vector *newV = new Vector(this->x - b.x,this->y - b.y,this->z - b.z);
   
   return newV;
}

Vector* Vector::operator *(const double v)
{
    Vector *newV = new Vector(this->x * v,this->y * v,this->z * v);
   
   return newV;
}



