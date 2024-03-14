#pragma once
#include "Ochirov.h"
#include <string>
#include <vector>

class Mission {
public:
    std::string name;
    std::string description;
};

class MissionControl {
public:
    std::vector<Mission> missions;
    void createMission(std::string name, std::string description);
    void SuccessMission_ontheplanet(int dangerous, int bright, int fuel, int distance);
};

class Life : public Planet {
public:
    void PercentofLife(bool water, int distance_from_star);
};
