#include "svechnikov.h"
#include <iostream>

using namespace std;

void Fleet::addSpacecraft(Spacecraft spacecraft) {
        spacecrafts.push_back(spacecraft);
    }
void Fleet::removeSpacecraft(int id) {
    for (auto it = spacecrafts.begin(); it != spacecrafts.end(); ++it) {
        if (it->id == id) {
            spacecrafts.erase(it);
            break;
            }
    }
}

void Crew::addPilot(Pilot pilot) {
        pilots.push_back(pilot);
    }
