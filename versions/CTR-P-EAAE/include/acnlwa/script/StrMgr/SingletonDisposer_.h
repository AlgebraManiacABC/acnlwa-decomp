#ifndef ACNLWA_SCRIPT_STRMGR_SINGLETONDISPOSER__H
#define ACNLWA_SCRIPT_STRMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace script {
namespace StrMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace StrMgr
}  // namespace script

#endif  // ACNLWA_SCRIPT_STRMGR_SINGLETONDISPOSER__H
