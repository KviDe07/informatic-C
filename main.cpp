#include <iostream>
#include <vector>
#include "Ochirov.h"
#include "svechnikov.h"
#include "Krivushin.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Fleet fleet;
    Spacecraft ship1;
    ship1.id = 1;
    ship1.name = "Starship 1";
    ship1.capacity = 100;
    ship1.fuel = 100;
    fleet.addSpacecraft(ship1);

    MissionControl control;
    control.createMission("Explore New Galaxy", "Description of the mission");

    Crew crew;
    Pilot pilot1;
    pilot1.id = 1;
    pilot1.name = "John Doe";
    crew.addPilot(pilot1);

    Planet earth;
    earth.name = "Earth";
    earth.distance = 100;
    Life New_Planet;
    New_Planet.water = false;
    New_Planet.distance_from_star = 100000;
    cout << "Is life possible on this planet?" << endl;
    New_Planet.PercentofLife(New_Planet.water, New_Planet.distance_from_star);

    Star sun;
    sun.name = "Sun";
    sun.bright = 10000;

    SpaceStation station;
    station.name = "Space Station Alpha";

    Alien alien;
    alien.name = "Xenon";
    alien.dangerous = 0;

    Mission mission;
    mission.name = "First Contact";
    mission.description = "Seek out and establish communication with alien species.";
    control.missions.push_back(mission);
    cout << "What will be the success of the mission?" << endl;
    control.SuccessMission_ontheplanet(alien.dangerous, sun.bright, ship1.fuel, earth.distance);

    return 0;
}
