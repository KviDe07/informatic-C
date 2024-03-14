#include <iostream>
#include "Krivushin.h"
using namespace std;

 void MissionControl::createMission(string name, string description) {
        Mission mission;
        mission.name = name;
        mission.description = description;
        missions.push_back(mission);
    }
void MissionControl::SuccessMission_ontheplanet(int dangerous, int bright, int fuel, int distance) {
    if (dangerous != 1 && bright <= 10000 && fuel >= distance) {
        cout << "The Mission will be completed safely" << endl;
    }
    else {
        cout << "The Mission will fail" << endl;
    }
}

 void Life::PercentofLife(bool water, int distance_from_star) {
        if (water == true && distance_from_star <= 10000) {
            cout << "Yes, Life is possible" << endl;
        }
        else {
            cout << "No, impossible" << endl;
        }
    }
