#ifndef ACNLWA_SOUNDMUINFO_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDMUINFO_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundMuInfo {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundMuInfo

#endif  // ACNLWA_SOUNDMUINFO_SINGLETONDISPOSER__H
