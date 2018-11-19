#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "methods.h"

TEST_CASE("Task A"){
  SECTION("Valid input"){
    Coord3D pointP = {2,4,4};
    CHECK(length(&pointP) == (6));
  }
}

TEST_CASE("Task B"){
  SECTION("Valid input"){
    Coord3D p1 = {10, 20, 50};
    Coord3D p2 = {10, 20, 40};

    Coord3D *p = &p1;
    Coord3D *q = &p2;
  
    Coord3D * ans = fartherFromOrigin(&p1, &p2);
    CHECK(ans == p);
  }
}

TEST_CASE("Task C"){
  SECTION("Valid input"){
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);
  }
}

TEST_CASE("Task E"){
  SECTION("Valid input"){
    Coord3D *ppos = createCoord3D(10,20,30);
    Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);
    move(ppos, pvel, 10.0);
    CHECK((*ppos).x == 65);
    CHECK((*ppos).y == 6);
    CHECK((*ppos).z == (*ppos).z);
    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
  }
}

TEST_CASE("Task F"){
  SECTION("Valid input"){
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
      // update its velocity
      setVelocity(p, 10.0 * time, 0.3, 0.1);

      // move the particle
      move(p, dt);
      time += dt;
    }
    CHECK((*p).ppos.x == (*p).ppos.x);
    CHECK((*p).ppos.y == (*p).ppos.y);
    CHECK((*p).ppos.z == (*p).ppos.z);
    deleteParticle(p);
  }
}


#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "methods.h"

TEST_CASE("Task A"){
  SECTION("Valid input"){
    Coord3D pointP = {2,4,4};
    CHECK(length(&pointP) == (6));
  }
}

TEST_CASE("Task B"){
  SECTION("Valid input"){
    Coord3D p1 = {10, 20, 50};
    Coord3D p2 = {10, 20, 40};

    Coord3D *p = &p1;
    Coord3D *q = &p2;
  
    Coord3D * ans = fartherFromOrigin(&p1, &p2);
    CHECK(ans == p);
  }
}

TEST_CASE("Task C"){
  SECTION("Valid input"){
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);
  }
}

TEST_CASE("Task E"){
  SECTION("Valid input"){
    Coord3D *ppos = createCoord3D(10,20,30);
    Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);
    move(ppos, pvel, 10.0);
    CHECK((*ppos).x == 65);
    CHECK((*ppos).y == 6);
    CHECK((*ppos).z == (*ppos).z);
    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
  }
}

TEST_CASE("Task F"){
  SECTION("Valid input"){
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
      // update its velocity
      setVelocity(p, 10.0 * time, 0.3, 0.1);

      // move the particle
      move(p, dt);
      time += dt;
    }
    CHECK((*p).ppos.x == (*p).ppos.x);
    CHECK((*p).ppos.y == (*p).ppos.y);
    CHECK((*p).ppos.z == (*p).ppos.z);
    deleteParticle(p);
  }
}

