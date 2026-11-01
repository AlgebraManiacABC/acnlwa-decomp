#ifndef ACNLWA_SOUNDKKINFO_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDKKINFO_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundKKInfo {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundKKInfo

#endif  // ACNLWA_SOUNDKKINFO_SINGLETONDISPOSER__H
