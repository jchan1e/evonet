#ifndef objects_h
#define objects_h

#include "stdGL.h"

#define Sin(x) (sin(x * 3.1415927/180))
#define Cos(x) (cos(x * 3.1415927/180))


//Vertex Polar-Cartesian tranformation function
void VertexC(double th, double ph);

//without the coloration
void VertexS(double th, double ph);

//without the spherical normal
void Vertex(double th, double ph);

//Normal Polar-Cartesian transformation and summation function
void pNormal(double th1, double ph1, double th2, double ph2, double th3, double ph3);

//Sphere function nabbed from ex8 and slightly modified
void ball(double x, double y, double z,
             double s);

//Sphere function nabbed from ex8 and slightly modified
void sphere(double x, double y, double z,
                double r,
                double s);

void torus(double x, double y, double z,
              double r,
              double s);

void cube(double x, double y, double z,
             double r,
             double s);


void octahedron(double x, double y, double z,
                      double r,
                      double s);


void dodecahedron(double x, double y, double z,
                      double r,
                      double s);


void icosahedron(double x, double y, double z,
                      double r,
                      double s);

#endif
