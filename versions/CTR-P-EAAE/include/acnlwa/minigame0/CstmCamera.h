#ifndef ACNLWA_MINIGAME0_CSTMCAMERA_H
#define ACNLWA_MINIGAME0_CSTMCAMERA_H

#include "acnlwa/ICameraUpdater.h"
#include "acnlwa/sead/IDisposer.h"

namespace minigame0 {

class CstmCamera : public ::ICameraUpdater, public ::sead::IDisposer {
public:
    virtual ~CstmCamera();
};

}  // namespace minigame0

#endif  // ACNLWA_MINIGAME0_CSTMCAMERA_H
