#ifndef ACNLWA_CENSUSWINDOW_H
#define ACNLWA_CENSUSWINDOW_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/SoPaCaWindowBase.h"

class CensusWindow : public ::state::Mode< ::CensusWindow>, public ::SoPaCaWindowBase {
public:
    virtual ~CensusWindow();
    virtual void CensusWindow_VF03();
    virtual void CensusWindow_VF04();
    virtual void CensusWindow_VF05();
    virtual void CensusWindow_VF06();
    virtual void CensusWindow_VF07();
    virtual void CensusWindow_VF08();
    virtual void CensusWindow_VF09();
    virtual void VF10();
};

#endif  // ACNLWA_CENSUSWINDOW_H
