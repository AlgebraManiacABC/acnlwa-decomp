#ifndef ACNLWA_NW_FONT_RECTDRAWER_H
#define ACNLWA_NW_FONT_RECTDRAWER_H

namespace nw {
namespace font {

class RectDrawer {
public:
    virtual ~RectDrawer();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace font
}  // namespace nw

#endif  // ACNLWA_NW_FONT_RECTDRAWER_H
