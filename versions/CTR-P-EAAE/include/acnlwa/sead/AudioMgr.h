#ifndef ACNLWA_SEAD_AUDIOMGR_H
#define ACNLWA_SEAD_AUDIOMGR_H

#include "acnlwa/sead/hostio/Node.h"
#include "acnlwa/sead/IDisposer.h"

namespace sead {

class AudioMgr : public ::sead::hostio::Node {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual void VF00();
    virtual ~AudioMgr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOMGR_H
