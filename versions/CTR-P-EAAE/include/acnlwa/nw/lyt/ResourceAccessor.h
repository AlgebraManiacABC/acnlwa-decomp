#ifndef ACNLWA_NW_LYT_RESOURCEACCESSOR_H
#define ACNLWA_NW_LYT_RESOURCEACCESSOR_H

namespace nw {
namespace lyt {

class ResourceAccessor {
public:
    virtual ~ResourceAccessor();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05();
    virtual void VF06();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_RESOURCEACCESSOR_H
