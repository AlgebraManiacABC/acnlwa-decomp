#ifndef ACNLWA_SOUNDMICMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDMICMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundMicMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundMicMgr

#endif  // ACNLWA_SOUNDMICMGR_SINGLETONDISPOSER__H
