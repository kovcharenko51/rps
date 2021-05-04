#pragma once

#include "Scene.h"

class EconomyManager : public Script {
protected:
    Scene& scene_;
public:
    EconomyManager(Scene&);
    void Update() override;
};