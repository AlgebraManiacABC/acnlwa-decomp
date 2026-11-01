#ifndef ACNLWA_TOURDATA_SINGLETONDISPOSER__H
#define ACNLWA_TOURDATA_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace TourData {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace TourData

#endif  // ACNLWA_TOURDATA_SINGLETONDISPOSER__H
