#ifndef ACNLWA_SOUNDHANIWAMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDHANIWAMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundHaniwaMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundHaniwaMgr

#endif  // ACNLWA_SOUNDHANIWAMGR_SINGLETONDISPOSER__H
