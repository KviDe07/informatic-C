#include "Ochirov.h"
#include <string>
#include <vector>
using namespace std;

class Mission {
public:
    string name;
    string description;
};

class MissionControl {
public:
    vector<Mission> missions;
    void createMission(string name, string description);
    void SuccessMission_ontheplanet(int dangerous, int bright, int fuel, int distance);
};

class Life : public Planet {
public:
    void PercentofLife(bool water, int distance_from_star);
};
