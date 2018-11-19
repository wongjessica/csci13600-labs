/*
Author: Jessica Wong
Course: CSCI 133
Instructor: Zamansky
Assignment: Lab_09
*/
#include <iostream>
#include "func.h"

using std::cout;
using std::endl;
using std::string;

int main(){
	cout << "Lab 9: Pointers\n" << endl;
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};
	cout << "length(pointP): " << length(&pointP) << endl << endl;
	cout << "length(pointQ): " << length(&pointQ) << endl << endl;

	cout << "Point P: " << &pointP << endl << endl;
	cout << "Point Q: " << &pointQ << endl << endl;

	Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

	cout << "ans = " << ans << endl << endl;

	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};

	move(&pos, &vel, 2.0);
	cout << "The test Coordinate is " << pos.x << " " << pos.y << " " << pos.z << endl << endl;

	cout << "Test position: 5 4 3\n";
	Coord3D *ppos = createCoord3D(5,4,3);

	cout << "Test velocity: 1 2 3\n";
	Coord3D *pvel = createCoord3D(1,2,3);

	move(ppos, pvel, 10.0);

	cout << "Post coordinates: " 
		<< (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

	deleteCoord3D(ppos); // release memory
	deleteCoord3D(pvel);
	cout << endl;

	cout << "Particle Task" << endl;
	// make new particle
	Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
	double time = 0.0;
	double dt = 0.1;
	while(time < 3.0) {
		// update its velocity
		setVelocity(p, 10.0 * time, 0.3, 0.1);

		// move the particle
		move(p, dt);
		time += dt;

		// reporting its coordinates
		cout << "Time: " << time << " \t";
		cout << "Position: "
			<< getPosition(p).x << ", "
			<< getPosition(p).y << ", "
			<< getPosition(p).z << endl;
	}
	// remove the particle, deallocating its memory
	deleteParticle(p);
	cout << endl;

	return 0;
}
