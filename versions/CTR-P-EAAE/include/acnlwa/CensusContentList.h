#ifndef ACNLWA_CENSUSCONTENTLIST_H
#define ACNLWA_CENSUSCONTENTLIST_H

#include "acnlwa/InOutWindow.h"

class CensusContentList : public ::InOutWindow {
public:
    virtual ~CensusContentList();
    virtual unsigned int VF06();
    virtual void VF10();
};

#endif  // ACNLWA_CENSUSCONTENTLIST_H
