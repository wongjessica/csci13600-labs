#include "funcs.h"

double length(Coord3D *p) {
	return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
	if (length(p1) > length(p2)) {
		return p1;
	}
	else {
		return p2;
	}
}

void move(Coord3D *pos, Coord3D *vel, double t) {
	pos->x += vel->x * t;
	pos->y += vel->y * t;
	pos->z += vel->z * t;
}

Coord3D* createCoord3D(double x, double y, double z) {
	Coord3D* ret = new Coord3D;
	ret->x = x;
	ret->y = y;
	ret->z = z;
	return ret;
}

void deleteCoord3D(Coord3D *p) {
	delete p;
}

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz) {
	Particle* ret = new Particle;
	ret->x = x;
	ret->y = y;
	ret->z = z;
	ret->vx = vx;
	ret->vy = vy;
	ret->vz = vz;
	return ret;
}

void setVelocity(Particle *p, double vx, double vy, double vz) {
	p->vx = vx;
	p->vy = vy;
	p->vz = vz;
}

Coord3D getPosition(Particle *p) {
	Coord3D* ret = new Coord3D;
	ret.x = p->x;
	ret.y = p->y;
	ret.z = p->z;
}

void move(Particle *p, double dt) {
	p->x += p->vx * dt;
	p->y += p->vy * dt;
	p->z += p->vz * dt;
}

void deleteParticle(Particle *p) {
	delete p;
}
