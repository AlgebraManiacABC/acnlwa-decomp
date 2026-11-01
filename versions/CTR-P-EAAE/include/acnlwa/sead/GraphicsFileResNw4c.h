#ifndef ACNLWA_SEAD_GRAPHICSFILERESNW4C_H
#define ACNLWA_SEAD_GRAPHICSFILERESNW4C_H

#include "acnlwa/sead/DirectResource.h"

namespace sead {

class GraphicsFileResNw4c : public ::sead::DirectResource {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~GraphicsFileResNw4c();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_GRAPHICSFILERESNW4C_H
