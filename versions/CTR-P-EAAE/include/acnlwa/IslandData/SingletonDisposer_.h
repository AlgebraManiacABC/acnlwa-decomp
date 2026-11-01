#ifndef ACNLWA_ISLANDDATA_SINGLETONDISPOSER__H
#define ACNLWA_ISLANDDATA_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace IslandData {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace IslandData

#endif  // ACNLWA_ISLANDDATA_SINGLETONDISPOSER__H
