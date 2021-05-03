#pragma once

#include "BattleScene.h"
#include "DrawManager.h"
#include "Scene.h"
#include "Script.h"
#include "Squad.h"

class BattleManager : public Script {
private:
    std::shared_ptr<Scene> scene_;
public:
    BattleManager(std::shared_ptr<Scene>);
    void Fight(BattleDecorator&, BattleDecorator&);
    void Update();
};