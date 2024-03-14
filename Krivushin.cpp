#include <iostream>
#include "Krivushin.h"


 void MissionControl::createMission(std::string name, std::string description) {
        Mission mission;
        mission.name = name;
        mission.description = description;
        missions.push_back(mission);
    }
void MissionControl::SuccessMission_ontheplanet(int dangerous, int bright, int fuel, int distance) {
    if (dangerous != 1 && bright <= 10000 && fuel >= distance) {
        std::cout << "The Mission will be completed safely" << std::endl;
    }
    else {
        std::cout << "The Mission will fail" << std::endl;
    }
}

 void Life::PercentofLife(bool water, int distance_from_star) {
        if (water == true && distance_from_star <= 10000) {
            std::cout << "Yes, Life is possible" << std::endl;
        }
        else {
            std::cout << "No, impossible" << std::endl;
        }
    }
