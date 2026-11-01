#ifndef ACNLWA_SEAD_AUDIOSUBSETBASE_H
#define ACNLWA_SEAD_AUDIOSUBSETBASE_H

#include "acnlwa/sead/hostio/Node.h"

namespace sead {

class AudioSubsetBase : public ::sead::hostio::Node {
public:
    virtual ~AudioSubsetBase();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOSUBSETBASE_H
