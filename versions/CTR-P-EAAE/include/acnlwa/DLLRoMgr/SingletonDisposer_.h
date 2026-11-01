#ifndef ACNLWA_DLLROMGR_SINGLETONDISPOSER__H
#define ACNLWA_DLLROMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace DLLRoMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace DLLRoMgr

#endif  // ACNLWA_DLLROMGR_SINGLETONDISPOSER__H
