#ifndef ACNLWA_SCRIPT_MGR_SINGLETONDISPOSER__H
#define ACNLWA_SCRIPT_MGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace script {
namespace Mgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace Mgr
}  // namespace script

#endif  // ACNLWA_SCRIPT_MGR_SINGLETONDISPOSER__H
