#ifndef ACNLWA_FONT_MGR_SINGLETONDISPOSER__H
#define ACNLWA_FONT_MGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace font {
namespace Mgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace Mgr
}  // namespace font

#endif  // ACNLWA_FONT_MGR_SINGLETONDISPOSER__H
