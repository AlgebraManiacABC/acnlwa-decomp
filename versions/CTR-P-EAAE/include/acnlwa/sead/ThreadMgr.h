#ifndef ACNLWA_SEAD_THREADMGR_H
#define ACNLWA_SEAD_THREADMGR_H

#include "acnlwa/sead/hostio/Node.h"
#include "acnlwa/sead/IDisposer.h"

namespace sead {

class ThreadMgr : public ::sead::hostio::Node {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual void VF00();
    virtual ~ThreadMgr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_THREADMGR_H
