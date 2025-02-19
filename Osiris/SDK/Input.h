#pragma once

#include "Pad.h"
#include "Vector.h"

class Input {
public:
#ifdef _WIN32
    PAD(12)
#else
    PAD(16)
#endif
    bool isTrackIRAvailable;
    bool isMouseInitialized;
    bool isMouseActive;
#ifdef _WIN32
    PAD(178)
#else
    PAD(182)
#endif
    bool isCameraInThirdPerson;
    bool cameraMovingWithMouse;
    Vector cameraOffset;
};
