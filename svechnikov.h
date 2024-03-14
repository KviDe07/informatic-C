#pragma once
#include <string>
#include <vector>

class Spacecraft {
public:
    int id;
    std::string name;
    int capacity, fuel;
};

class Fleet {
public:
    std::vector<Spacecraft> spacecrafts;
    void addSpacecraft(Spacecraft spacecraft);
    void removeSpacecraft(int id);

};

class Pilot {
public:
    int id;
    std::string name;
};

class Crew {
public:
    std::vector<Pilot> pilots;
    void addPilot(Pilot pilot);
};
