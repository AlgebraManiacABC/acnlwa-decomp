#ifndef ACNLWA_SEARCHCANDXZ_H
#define ACNLWA_SEARCHCANDXZ_H

#include "acnlwa/SearchCandXZCore.h"

template <int T0, int T1>
class SearchCandXZ : public ::SearchCandXZCore {
public:
    virtual void VF00();
    virtual void VF01();
};

template <int T0, int T1>
void SearchCandXZ<T0, T1>::VF00() {}

template <int T0, int T1>
void SearchCandXZ<T0, T1>::VF01() {}


#endif  // ACNLWA_SEARCHCANDXZ_H
