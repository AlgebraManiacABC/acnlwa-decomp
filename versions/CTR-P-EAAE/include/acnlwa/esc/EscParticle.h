#ifndef ACNLWA_ESC_ESCPARTICLE_H
#define ACNLWA_ESC_ESCPARTICLE_H

#include "acnlwa/sead/IDisposer.h"

namespace esc {

class EscParticle {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };
};

}  // namespace esc

#endif  // ACNLWA_ESC_ESCPARTICLE_H
