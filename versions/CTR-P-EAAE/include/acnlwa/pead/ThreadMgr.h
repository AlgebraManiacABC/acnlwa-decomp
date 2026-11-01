#ifndef ACNLWA_PEAD_THREADMGR_H
#define ACNLWA_PEAD_THREADMGR_H

#include "acnlwa/pead/hostio/Node.h"
#include "acnlwa/pead/IDisposer.h"

namespace pead {

class ThreadMgr : public ::pead::hostio::Node {
public:
    class SingletonDisposer_ : public ::pead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual ~ThreadMgr();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_THREADMGR_H
