#ifndef ACNLWA_SOUNDRIVERMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDRIVERMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundRiverMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundRiverMgr

#endif  // ACNLWA_SOUNDRIVERMGR_SINGLETONDISPOSER__H
