#ifndef ACNLWA_BADGEEXPLAINWINDOW_H
#define ACNLWA_BADGEEXPLAINWINDOW_H

#include "acnlwa/ExplainWindow.h"

class BadgeExplainWindow : public ::ExplainWindow {
public:
    virtual ~BadgeExplainWindow();
    virtual unsigned int VF06();
    virtual void VF10();

    private:
    char unk_0x004[0x210];
    int unk_0x214;
    char unk_0x218[0xc0];
    int unk_0x2d8;
};

#endif  // ACNLWA_BADGEEXPLAINWINDOW_H
