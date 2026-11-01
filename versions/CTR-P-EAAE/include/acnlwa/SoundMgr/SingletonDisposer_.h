#ifndef ACNLWA_SOUNDMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundMgr

#endif  // ACNLWA_SOUNDMGR_SINGLETONDISPOSER__H
