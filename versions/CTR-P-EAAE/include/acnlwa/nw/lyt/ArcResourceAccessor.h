#ifndef ACNLWA_NW_LYT_ARCRESOURCEACCESSOR_H
#define ACNLWA_NW_LYT_ARCRESOURCEACCESSOR_H

#include "acnlwa/nw/lyt/ResourceAccessor.h"

namespace nw {
namespace lyt {

class ArcResourceAccessor : public ::nw::lyt::ResourceAccessor {
public:
    virtual ~ArcResourceAccessor();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_ARCRESOURCEACCESSOR_H
