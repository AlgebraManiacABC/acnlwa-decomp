#ifndef ACNLWA_SOUNDLIVEPLAYER_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDLIVEPLAYER_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundLivePlayer {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundLivePlayer

#endif  // ACNLWA_SOUNDLIVEPLAYER_SINGLETONDISPOSER__H
