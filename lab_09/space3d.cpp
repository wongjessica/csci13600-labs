#include <iostream>
#include <math.h>
#include "func.h"

using std::cout;
using std::cin;
using std::endl;

// distance from 3d coordinate to origin
double length(Coord3D *p){
	return sqrt(pow((*p).x, 2) + pow((*p).y, 2) + pow((*p).z, 2));
}

// returns which coordinate is further away from the origin
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
	return (length(p1) > length(p2)) ? p1 : p2;
}

// moves coordinate by given values
void move(Coord3D *ppos, Coord3D *pvel, double dt){
	(*ppos).x += (*pvel).x * dt;
	(*ppos).y += (*pvel).y * dt;
	(*ppos).z += (*pvel).z * dt;
}

// creates new coordinate
Coord3D* createCoord3D(double x, double y, double z){
	Coord3D *ret = new Coord3D;
	(*ret).x = x;
	(*ret).y = y;
	(*ret).z = z;
	return ret;
}

// deletes coordinate
void deleteCoord3D(Coord3D *p){
	delete p;
}
