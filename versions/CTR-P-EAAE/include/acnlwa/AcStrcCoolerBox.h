#ifndef ACNLWA_ACSTRCCOOLERBOX_H
#define ACNLWA_ACSTRCCOOLERBOX_H

#include "acnlwa/UtlBase.h"
#include "acnlwa/AcStrc.h"
#include "acnlwa/ObjTalkRecept.h"

class AcStrcCoolerBox : public ::UtlBase< ::AcStrc>, public ::ObjTalkRecept {
public:
    virtual ~AcStrcCoolerBox();
};

#endif  // ACNLWA_ACSTRCCOOLERBOX_H
