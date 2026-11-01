#ifndef ACNLWA_SOUNDSEAMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDSEAMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundSeaMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundSeaMgr

#endif  // ACNLWA_SOUNDSEAMGR_SINGLETONDISPOSER__H
