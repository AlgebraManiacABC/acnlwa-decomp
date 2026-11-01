#ifndef ACNLWA_GUI_KEY_H
#define ACNLWA_GUI_KEY_H

namespace gui {

class Key {
public:
    virtual ~Key();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05();
};

}  // namespace gui

#endif  // ACNLWA_GUI_KEY_H
