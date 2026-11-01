#ifndef ACNLWA_PEAD_HEAPMGR_H
#define ACNLWA_PEAD_HEAPMGR_H

#include "acnlwa/pead/hostio/Node.h"

namespace pead {

class HeapMgr : public ::pead::hostio::Node {
public:
    virtual ~HeapMgr();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_HEAPMGR_H
