#ifndef ACNLWA_PLAYERSIMPLEMESSAGE_H
#define ACNLWA_PLAYERSIMPLEMESSAGE_H

#include "acnlwa/script/ITalkRecept.h"

class PlayerSimpleMessage : public ::script::ITalkRecept {
public:
    virtual ~PlayerSimpleMessage();
    virtual void ITalkRecept_VF02();
    virtual void ITalkRecept_VF07();
    virtual void ITalkRecept_VF08();
    virtual void ITalkRecept_VF18();
    virtual void ITalkRecept_VF23();
    virtual void ITalkRecept_VF38();
    virtual void ITalkRecept_VF40();
    virtual void ITalkRecept_VF41();
    virtual void ITalkRecept_VF42();
    virtual void ITalkRecept_VF43();
};

#endif  // ACNLWA_PLAYERSIMPLEMESSAGE_H
