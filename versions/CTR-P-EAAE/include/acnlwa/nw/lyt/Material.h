#ifndef ACNLWA_NW_LYT_MATERIAL_H
#define ACNLWA_NW_LYT_MATERIAL_H

namespace nw {
namespace lyt {

class Material {
public:
    virtual ~Material();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();

    int GetTexSRTAry();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_MATERIAL_H
