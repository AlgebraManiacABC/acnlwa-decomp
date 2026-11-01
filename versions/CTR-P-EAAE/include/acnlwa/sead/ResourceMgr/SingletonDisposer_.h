#ifndef ACNLWA_SEAD_RESOURCEMGR_SINGLETONDISPOSER__H
#define ACNLWA_SEAD_RESOURCEMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace sead {
namespace ResourceMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace ResourceMgr
}  // namespace sead

#endif  // ACNLWA_SEAD_RESOURCEMGR_SINGLETONDISPOSER__H
