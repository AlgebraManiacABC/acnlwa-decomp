#ifndef ACNLWA_ACSTRC_H
#define ACNLWA_ACSTRC_H

#include "acnlwa/DemoActor.h"
#include "acnlwa/script/ITalkRecept.h"

class AcStrc : public ::DemoActor {
public:
    class Recept : public ::script::ITalkRecept {
    public:
        virtual ~Recept();
    };

    virtual ~AcStrc();
};

#endif  // ACNLWA_ACSTRC_H
