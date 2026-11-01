#ifndef ACNLWA_SEAD_PROCESSMETER_SINGLETONDISPOSER__H
#define ACNLWA_SEAD_PROCESSMETER_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace sead {
namespace ProcessMeter {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace ProcessMeter
}  // namespace sead

#endif  // ACNLWA_SEAD_PROCESSMETER_SINGLETONDISPOSER__H
