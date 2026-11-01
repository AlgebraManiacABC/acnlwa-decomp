#ifndef ACNLWA_TOURRESULT_SINGLETONDISPOSER__H
#define ACNLWA_TOURRESULT_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace TourResult {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace TourResult

#endif  // ACNLWA_TOURRESULT_SINGLETONDISPOSER__H
