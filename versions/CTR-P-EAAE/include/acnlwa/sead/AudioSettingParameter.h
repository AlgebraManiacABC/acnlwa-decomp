#ifndef ACNLWA_SEAD_AUDIOSETTINGPARAMETER_H
#define ACNLWA_SEAD_AUDIOSETTINGPARAMETER_H

#include "acnlwa/sead/TaskParameter.h"

namespace sead {

class AudioSettingParameter : public ::sead::TaskParameter {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioSettingParameter();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOSETTINGPARAMETER_H
