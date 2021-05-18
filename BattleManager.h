#pragma once


#include "DrawManager.h"
#include "BattleScene.h"
#include "Squad.h"

class BattleManager : public Script {
private:
    bool did_win_ = false;
protected:
    BattleScene& scene_;
public:
    enum BattlePhase {
        StartPhase, PreparePhase, AttackPhase, KillPhase
    };
    BattlePhase phase = StartPhase;
    BattleManager(Scene&);
    void Prepare(BattleDecorator&, BattleDecorator&);
    void Attack(BattleDecorator&, BattleDecorator&);
    bool CheckDeath(BattleDecorator&, BattleDecorator&);
    void Kill(BattleDecorator&, BattleDecorator&);
    void Pop(BattleDecorator&, BattleDecorator&);
    void Update() override;
};