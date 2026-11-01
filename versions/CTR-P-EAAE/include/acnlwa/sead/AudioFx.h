#ifndef ACNLWA_SEAD_AUDIOFX_H
#define ACNLWA_SEAD_AUDIOFX_H

namespace sead {

class AudioFx {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioFx();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOFX_H
