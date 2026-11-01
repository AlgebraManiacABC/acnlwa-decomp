#ifndef ACNLWA_SEAD_FILEDEVICEMGR_SINGLETONDISPOSER__H
#define ACNLWA_SEAD_FILEDEVICEMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace sead {
namespace FileDeviceMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace FileDeviceMgr
}  // namespace sead

#endif  // ACNLWA_SEAD_FILEDEVICEMGR_SINGLETONDISPOSER__H
