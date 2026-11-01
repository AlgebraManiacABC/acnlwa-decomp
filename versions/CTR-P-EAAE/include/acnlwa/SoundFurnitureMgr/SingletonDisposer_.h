#ifndef ACNLWA_SOUNDFURNITUREMGR_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDFURNITUREMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundFurnitureMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundFurnitureMgr

#endif  // ACNLWA_SOUNDFURNITUREMGR_SINGLETONDISPOSER__H
