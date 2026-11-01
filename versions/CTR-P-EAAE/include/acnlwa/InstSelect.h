#ifndef ACNLWA_INSTSELECT_H
#define ACNLWA_INSTSELECT_H

#include "acnlwa/SelectBase.h"

template <int T0>
class InstSelect : public ::SelectBase {
public:
    virtual ~InstSelect();
};

template <int T0>
InstSelect<T0>::~InstSelect() {}


#endif  // ACNLWA_INSTSELECT_H
