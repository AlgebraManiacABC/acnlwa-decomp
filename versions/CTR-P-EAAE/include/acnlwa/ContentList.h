#ifndef ACNLWA_CONTENTLIST_H
#define ACNLWA_CONTENTLIST_H

#include "acnlwa/InOutWindowInButton.h"

class ContentList : public ::InOutWindowInButton<4> {
public:
    virtual ~ContentList();
    virtual unsigned int VF06();
    virtual void VF10();
    virtual void VF11();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

#endif  // ACNLWA_CONTENTLIST_H
