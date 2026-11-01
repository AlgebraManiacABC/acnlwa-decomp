#ifndef ACNLWA_ISHUTFACT2_FOSSILTEMPLATEBUILDER_H
#define ACNLWA_ISHUTFACT2_FOSSILTEMPLATEBUILDER_H

#include "acnlwa/ishutfact2/BasicBuilder.h"

namespace ishutfact2 {

class FossilTemplateBuilder : public ::ishutfact2::BasicBuilder {
public:
    virtual ~FossilTemplateBuilder();
    virtual void VF07();
    virtual void VF10();
};

}  // namespace ishutfact2

#endif  // ACNLWA_ISHUTFACT2_FOSSILTEMPLATEBUILDER_H
