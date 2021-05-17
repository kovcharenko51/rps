#pragma once

#include <vector>
#include "Units.h"

class Squad {
public:
    std::vector<Unit*> units;
};

class BattleDecorator {
private:
    Squad* squad_;
public:
    BattleDecorator() = default;
    explicit BattleDecorator(Squad*);
    Unit* GetCurrentUnit();
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
    const Squad& GetSquad();
    size_t GetSquadSize();
    unsigned int GetBalance();
    void AddBalance(unsigned int);
};