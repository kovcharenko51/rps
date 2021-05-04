#pragma once

#include "Script.h"

class EconomyManager : Script {
public:
    EconomyManager(Scene&);
    void Update() override;
};