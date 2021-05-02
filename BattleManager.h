#pragma once

#include "BattleScene.h"
#include "DrawManager.h"
#include "Scene.h"
#include "Script.h"
#include "Squad.h"

class BattleManager : public Script {
private:
    Scene* scene_;
public:
    BattleManager(Scene*);
    void Fight(BattleDecorator&, BattleDecorator&);
    void Update();
};