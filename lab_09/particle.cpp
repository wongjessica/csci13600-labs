#include <iostream>
#include <math.h>
#include "func.h"

using std::cout;
using std::cin;
using std::endl;

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
	Particle *ret = new Particle;
	(*ret).x = x;
	(*ret).y = y;
	(*ret).z = z;
	(*ret).vx = vx;
	(*ret).vy = vy;
	(*ret).vz = vz;
	return ret;
}
// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz){
	(*p).vx = vx;
	(*p).vy = vy;
	(*p).vz = vz;
}
// get its current position
Coord3D getPosition(Particle *p){
	Coord3D ret;
	ret.x = (*p).x;
	ret.y = (*p).y;
	ret.z = (*p).z;
	return ret;
}
// update particle's position after elapsed time dt
void move(Particle *p, double dt){
	(*p).x += (*p).vx * dt;
	(*p).y += (*p).vy * dt;
	(*p).z += (*p).vz * dt;
}
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
	delete p;
}
