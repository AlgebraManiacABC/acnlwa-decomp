#ifndef ACNLWA_DOUBLEBANK_H
#define ACNLWA_DOUBLEBANK_H

#include "acnlwa/Bank.h"

template <unsigned int T0, bool T1, typename T2>
class DoubleBank : public ::Bank<T0,2u,T1,T2> {
public:
    virtual ~DoubleBank();
};

template <unsigned int T0, bool T1, typename T2>
DoubleBank<T0, T1, T2>::~DoubleBank() {}


#endif  // ACNLWA_DOUBLEBANK_H
