#ifndef ACNLWA_SEAD_AUDIORESOURCELOADERCTR_H
#define ACNLWA_SEAD_AUDIORESOURCELOADERCTR_H

#include "acnlwa/sead/AudioResourceLoader.h"

namespace sead {

class AudioResourceLoaderCtr : public ::sead::AudioResourceLoader {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioResourceLoaderCtr();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIORESOURCELOADERCTR_H
