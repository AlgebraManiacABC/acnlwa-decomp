#ifndef ACNLWA_PLAYERBOARDINGMODEL_H
#define ACNLWA_PLAYERBOARDINGMODEL_H

#include "acnlwa/PlayerModel.h"

class PlayerBoardingModel : public ::PlayerModel {
public:
    virtual ~PlayerBoardingModel();
    virtual void VF09();
};

#endif  // ACNLWA_PLAYERBOARDINGMODEL_H
