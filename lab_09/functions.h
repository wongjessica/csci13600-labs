#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Coord3D {
	double x;
	double y;
	double z;
};

struct Particle {
	double x;
	double y;
	double z;
	double vx;
	double vy;
	double vz;
};

double length(Coord3D *p);
Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *pos, Coord3D *vel, double t);
Coord3D* createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz);
void setVelocity(Particle *p, double vx, double vy, double vz);
Coord3D getPosition(Particle *p);
void move(Particle *p, double dt);
void deleteParticle(Particle *p);
