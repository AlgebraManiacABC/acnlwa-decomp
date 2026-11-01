#ifndef ACNLWA_BOSSMGR_SINGLETONDISPOSER__H
#define ACNLWA_BOSSMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace BossMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace BossMgr

#endif  // ACNLWA_BOSSMGR_SINGLETONDISPOSER__H
