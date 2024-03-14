#pragma once
#include <string>

class Planet {
public:
    std::string name;
    int distance, distance_from_star;
    bool water;
};


class Star {
public:
    std::string name;
    int bright;
};

class SpaceStation {
public:
    std::string name;
};

class Alien {
public:
    std::string name;
    int dangerous;
};
