#ifndef ACNLWA_EXHIBITIONPARKINFO_SINGLETONDISPOSER__H
#define ACNLWA_EXHIBITIONPARKINFO_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace ExhibitionParkInfo {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace ExhibitionParkInfo

#endif  // ACNLWA_EXHIBITIONPARKINFO_SINGLETONDISPOSER__H
