#ifndef ACNLWA_SCRIPT_UIMGR_SINGLETONDISPOSER__H
#define ACNLWA_SCRIPT_UIMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace script {
namespace UiMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace UiMgr
}  // namespace script

#endif  // ACNLWA_SCRIPT_UIMGR_SINGLETONDISPOSER__H
