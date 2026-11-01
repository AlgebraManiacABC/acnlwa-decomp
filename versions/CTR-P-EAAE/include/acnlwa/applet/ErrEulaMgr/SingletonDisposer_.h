#ifndef ACNLWA_APPLET_ERREULAMGR_SINGLETONDISPOSER__H
#define ACNLWA_APPLET_ERREULAMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace applet {
namespace ErrEulaMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace ErrEulaMgr
}  // namespace applet

#endif  // ACNLWA_APPLET_ERREULAMGR_SINGLETONDISPOSER__H
