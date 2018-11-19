#include <iostream>
#include <cmath>
#include "functions.h"

double length(Coord3D *p){
  Coord3D location = *p;
  double x = location.x;
  double y = location.y;
  double z = location.z;
  double distance = sqrt((x*x) + (y*y) + (z*z));

  return distance;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  Coord3D *ans;

  if(length(p2) < length(p1)){
    ans = p1;
  }else{
    ans = p2;
  }
  
  return ans;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  (*ppos).x = (*ppos).x + ((*pvel).x * dt);
  (*ppos).y = (*ppos).y + ((*pvel).y * dt);
  (*ppos).z = (*ppos).z + ((*pvel).z * dt);
}

Coord3D* createCoord3D(double x, double y, double z){
  Coord3D *result = new Coord3D;
  *result = {x, y, z};
  
  return result;
}

void deleteCoord3D(Coord3D *p){
  delete p;
  
  return;
}

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
  Particle *result = new Particle;
  *result = {{x,y,z},{vx,vy,vz}};

  return result;
}

void setVelocity(Particle *p, double vx, double vy, double vz){
  (*p).pvel.x = vx;
  (*p).pvel.y = vy;
  (*p).pvel.z = vz;
}

Coord3D getPosition(Particle *p){
  return (*p).ppos;
}

void move(Particle *p, double dt){
  (*p).ppos.x = (*p).ppos.x + ((*p).pvel.x * dt);
  (*p).ppos.y = (*p).ppos.y + ((*p).pvel.y * dt);
  (*p).ppos.z = (*p).ppos.z + ((*p).pvel.z * dt);

  return;
}

void deleteParticle(Particle *p){
  delete p;
  
  return;
}
