#ifndef ACNLWA_SEAD_PTCL_PTCLEDITOR_H
#define ACNLWA_SEAD_PTCL_PTCLEDITOR_H

#include "acnlwa/sead/hostio/Node.h"
#include "acnlwa/sead/hostio/PaletteEventListener.h"

namespace sead {
namespace ptcl {

class PtclEditor : public ::sead::hostio::Node, public ::sead::hostio::PaletteEventListener {
public:
    virtual void VF00();
    virtual ~PtclEditor();
    virtual void VF03();
};

}  // namespace ptcl
}  // namespace sead

#endif  // ACNLWA_SEAD_PTCL_PTCLEDITOR_H
