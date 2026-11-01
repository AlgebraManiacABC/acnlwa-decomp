#ifndef ACNLWA_PLAYERMODEL_H
#define ACNLWA_PLAYERMODEL_H

#include "acnlwa/HumanModel.h"

class PlayerModel : public ::HumanModel {
public:
    virtual void VF00();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual ~PlayerModel();
    virtual void VF09();
    virtual void VF10();
};

#endif  // ACNLWA_PLAYERMODEL_H
