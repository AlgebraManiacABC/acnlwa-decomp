#ifndef ACNLWA_VISITORLOCALINFO_SINGLETONDISPOSER__H
#define ACNLWA_VISITORLOCALINFO_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace VisitorLocalInfo {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace VisitorLocalInfo

#endif  // ACNLWA_VISITORLOCALINFO_SINGLETONDISPOSER__H
