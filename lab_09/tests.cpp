#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <cstddef>
#include "func.h"

TEST_CASE("Random Cases"){
	Coord3D coord1 = {3, 4, 12};
	Coord3D coord2 = {11, 36, 48};
	Coord3D vel = {1, 2, 3};

	CHECK(length(&coord1) - 13.0 < 0.0000000001);
	CHECK(length(&coord2) - 61.0 < 0.0000000001);

	CHECK(fartherFromOrigin(&coord1, &coord2) == &coord2);

	move(&coord1, &vel, 5);
	CHECK(coord1.x == 8);
	CHECK(coord1.y == 14);
	CHECK(coord1.z == 27);
	
	Coord3D *createC = createCoord3D(7, 8, 9);
	CHECK(createC->x == 7);
	CHECK(createC->y == 8);
	CHECK(createC->z == 9);
	
	Particle *createP = createParticle(10, 15, 20, 2, 4, 6);
	CHECK(createP->x == 10);
	CHECK(createP->y == 15);
	CHECK(createP->z == 20);
	CHECK(createP->vx == 2);
	CHECK(createP->vy == 4);
	CHECK(createP->vz == 6);
	
	setVelocity(createP, 1, 2, 3);
	CHECK(createP->vx == 1);
	CHECK(createP->vy == 2);
	CHECK(createP->vz == 3);
	
	Coord3D checkPos = getPosition(createP);
	CHECK(checkPos.x == 10);
	CHECK(checkPos.y == 15);
	CHECK(checkPos.z == 20);
	
	move(createP, 5);
	CHECK(createP->x == 15);
	CHECK(createP->y == 25);
	CHECK(createP->z == 35);
}
