#ifndef ACNLWA_UGC_MGR_SINGLETONDISPOSER__H
#define ACNLWA_UGC_MGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace ugc {
namespace Mgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace Mgr
}  // namespace ugc

#endif  // ACNLWA_UGC_MGR_SINGLETONDISPOSER__H
