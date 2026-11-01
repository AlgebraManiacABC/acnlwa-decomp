#ifndef ACNLWA_ISHUTFACT2_BORROWINGBUILDER_H
#define ACNLWA_ISHUTFACT2_BORROWINGBUILDER_H

#include "acnlwa/ishutfact2/BasicBuilder.h"

namespace ishutfact2 {

class BorrowingBuilder : public ::ishutfact2::BasicBuilder {
public:
    virtual ~BorrowingBuilder();
    virtual void VF07();
};

}  // namespace ishutfact2

#endif  // ACNLWA_ISHUTFACT2_BORROWINGBUILDER_H
