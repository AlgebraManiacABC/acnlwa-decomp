#ifndef ACNLWA_TOURLIST_SINGLETONDISPOSER__H
#define ACNLWA_TOURLIST_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace TourList {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace TourList

#endif  // ACNLWA_TOURLIST_SINGLETONDISPOSER__H
