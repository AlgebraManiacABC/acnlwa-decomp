#ifndef ACNLWA_SOUNDHISTORYMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDHISTORYMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundHistoryMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundHistoryMgr

#endif  // ACNLWA_SOUNDHISTORYMGR_SINGLETONDISPOSER__H
