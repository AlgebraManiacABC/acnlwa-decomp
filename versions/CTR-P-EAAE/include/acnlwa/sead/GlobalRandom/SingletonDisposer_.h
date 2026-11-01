#ifndef ACNLWA_SEAD_GLOBALRANDOM_SINGLETONDISPOSER__H
#define ACNLWA_SEAD_GLOBALRANDOM_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace sead {
namespace GlobalRandom {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace GlobalRandom
}  // namespace sead

#endif  // ACNLWA_SEAD_GLOBALRANDOM_SINGLETONDISPOSER__H
