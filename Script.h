#pragma once

class Script {
public:
    Script() = default;
    float freeze_time = 0.0f;
    virtual void Update() = 0;
    virtual ~Script() = default;
};