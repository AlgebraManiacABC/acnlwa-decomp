#ifndef ACNLWA_GUI_WIDGET_H
#define ACNLWA_GUI_WIDGET_H

namespace gui {

class Widget {
public:
    virtual ~Widget();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
};

}  // namespace gui

#endif  // ACNLWA_GUI_WIDGET_H
