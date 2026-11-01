#ifndef ACNLWA_ACINSECTFISHPLATE_H
#define ACNLWA_ACINSECTFISHPLATE_H

#include "acnlwa/DemoActor.h"
#include "acnlwa/script/ITalkRecept.h"

class AcInsectFishPlate : public ::DemoActor, public ::script::ITalkRecept {
public:
    virtual ~AcInsectFishPlate();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual unsigned char DemoActor_VF18();
    virtual unsigned int DemoActor_VF20();
};

#endif  // ACNLWA_ACINSECTFISHPLATE_H
