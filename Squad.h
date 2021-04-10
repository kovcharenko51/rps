#pragma once

#include <vector>
#include "Units.h"

struct Squad {
    std::vector<Unit*> units;
};

class ButtleDecorator {
private:
    Squad* squad;

    

public:
    ButtleDecorator(Squad* squad);
    const Unit* GetCurrentUnit();
    void KillCurrentUnit();
    size_t GetSquadSize();

};