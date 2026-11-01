#ifndef ACNLWA_COMPASS_MGR_SINGLETONDISPOSER__H
#define ACNLWA_COMPASS_MGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace compass {
namespace Mgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace Mgr
}  // namespace compass

#endif  // ACNLWA_COMPASS_MGR_SINGLETONDISPOSER__H
