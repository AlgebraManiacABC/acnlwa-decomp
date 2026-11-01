#ifndef ACNLWA_BASE_H
#define ACNLWA_BASE_H

#include "acnlwa/oml/framework/Process.h"

class Base : public ::oml::framework::Process {
public:
    virtual ~Base();
    virtual int Process_VF02();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual void Process_VF07();
    virtual bool Process_VF08();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual void Base_VF15();
};

#endif  // ACNLWA_BASE_H
