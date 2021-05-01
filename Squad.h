#pragma once

#include <vector>
#include "Units.h"

struct Squad {
    std::vector<Unit*> units;
};

class BattleDecorator {
private:
    Squad* squad_;
public:
    explicit BattleDecorator(Squad*);
    const Unit* GetCurrentUnit();
    void KillCurrentUnit();
    size_t GetSquadSize();
};

class EconomicDecorator {
private:
    Squad* squad_;
    unsigned int& balance_;
public:
    EconomicDecorator(Squad*, unsigned int&);
    bool InsertUnit(size_t, Unit*);
    void RemoveUnit(size_t);
    size_t GetSquadSize();
};