#pragma once

class Script {
public:
    float freeze_time;
    virtual void Update() = 0;
};