/* 
 * File:   Vector.h
 * Author: treinamento
 *
 * Created on September 4, 2015, 10:29 AM
 */

#ifndef VECTOR_H
#define	VECTOR_H

class Vector {
public:
    //Constructors and Destructors------------------------------------
    /*Initializes the vector the the provided x,y,z values*/
    Vector(double x, double y, double z);
    
    //Getters---------------------------------------------------------
    /*Returns de value of the x field (double)*/
    double getX();
    /*Returns de value of the y field (double)*/
    double getY();
    /*Returns de value of the z field (double)*/
    double getZ();
    
    //Operator Overload-----------------------------------------------
    /*The Vector addition operator*/
    Vector* operator +(const Vector &b);
     /*The Vector subtraction operator*/
    Vector* operator -(const Vector &b);
     /*Multiplies the Vector*/
    Vector* operator *(const double v);
    
private:
    /*Value of the Vector*/
    double x,y,z;

};

#endif	/* VECTOR_H */

