#ifndef ACNLWA_PWORKLIST_H
#define ACNLWA_PWORKLIST_H

#include "acnlwa/InstSelect.h"

class PWorkList : public ::InstSelect<8> {
public:
    virtual ~PWorkList();
    virtual void VF03();
    virtual void VF08();
    virtual void VF10();
    virtual void VF11();
    virtual void VF13();
    virtual void VF16();
    virtual void VF21();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
};

#endif  // ACNLWA_PWORKLIST_H
