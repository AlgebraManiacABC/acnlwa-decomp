#ifndef ACNLWA_TAB_H
#define ACNLWA_TAB_H

#include "acnlwa/state/Mode.h"

template <int T0>
class Tab : public ::state::Mode< ::Tab<T0> > {
public:
    virtual ~Tab();
    virtual void Mode_VF02();
};

template <int T0>
Tab<T0>::~Tab() {}

template <int T0>
void Tab<T0>::Mode_VF02() {}


#endif  // ACNLWA_TAB_H
