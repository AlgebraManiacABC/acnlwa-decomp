#ifndef ACNLWA_NN_NEX_JOB_H
#define ACNLWA_NN_NEX_JOB_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Job : public ::nn::nex::RefCountedObject {
public:
    virtual ~Job();
    virtual void VF02();
    virtual void VF03() = 0;
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_JOB_H
