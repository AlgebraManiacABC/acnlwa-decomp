#ifndef ACNLWA_BOSSSYS_SINGLETONDISPOSER__H
#define ACNLWA_BOSSSYS_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace BossSys {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace BossSys

#endif  // ACNLWA_BOSSSYS_SINGLETONDISPOSER__H
