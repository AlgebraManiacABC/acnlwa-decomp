#ifndef ACNLWA_BSPARTSSAVEMGR_H
#define ACNLWA_BSPARTSSAVEMGR_H

#include "acnlwa/Base.h"

template <typename T0>
class BsPartsSaveMgr : public ::Base {
public:
    virtual ~BsPartsSaveMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

template <typename T0>
BsPartsSaveMgr<T0>::~BsPartsSaveMgr() {}

template <typename T0>
unsigned int BsPartsSaveMgr<T0>::Process_VF03() {}

template <typename T0>
unsigned int BsPartsSaveMgr<T0>::Process_VF06() {}

template <typename T0>
unsigned int BsPartsSaveMgr<T0>::Process_VF09() {}

template <typename T0>
unsigned int BsPartsSaveMgr<T0>::Process_VF12() {}


#endif  // ACNLWA_BSPARTSSAVEMGR_H
