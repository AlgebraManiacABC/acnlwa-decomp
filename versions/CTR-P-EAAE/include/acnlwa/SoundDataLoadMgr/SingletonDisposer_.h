#ifndef ACNLWA_SOUNDDATALOADMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDDATALOADMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundDataLoadMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundDataLoadMgr

#endif  // ACNLWA_SOUNDDATALOADMGR_SINGLETONDISPOSER__H
