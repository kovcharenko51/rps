#pragma once

#include "Scene.h"

class Script {
protected:
    Scene& scene_;
public:
    Script(Scene&);
    float freeze_time = 0.0f;
    virtual void Update() = 0;
    virtual ~Script() = default;
};