#ifndef ACNLWA_ESC_ESCPROJECTIONSHADOWMODELMGR_H
#define ACNLWA_ESC_ESCPROJECTIONSHADOWMODELMGR_H

#include "acnlwa/sead/IDisposer.h"

namespace esc {

class EscProjectionShadowModelMgr {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };
};

}  // namespace esc

#endif  // ACNLWA_ESC_ESCPROJECTIONSHADOWMODELMGR_H
