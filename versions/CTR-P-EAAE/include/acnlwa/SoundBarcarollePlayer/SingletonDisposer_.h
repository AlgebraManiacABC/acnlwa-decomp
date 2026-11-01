#ifndef ACNLWA_SOUNDBARCAROLLEPLAYER_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDBARCAROLLEPLAYER_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundBarcarollePlayer {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundBarcarollePlayer

#endif  // ACNLWA_SOUNDBARCAROLLEPLAYER_SINGLETONDISPOSER__H
