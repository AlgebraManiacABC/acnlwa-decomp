#ifndef ACNLWA_GUI_KEYSET_H
#define ACNLWA_GUI_KEYSET_H

namespace gui {

class KeySet {
public:
    virtual ~KeySet();
    virtual void VF02() = 0;
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07();
    virtual void VF08() = 0;
};

}  // namespace gui

#endif  // ACNLWA_GUI_KEYSET_H
