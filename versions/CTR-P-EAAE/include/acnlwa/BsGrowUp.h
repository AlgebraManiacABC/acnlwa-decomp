#ifndef ACNLWA_BSGROWUP_H
#define ACNLWA_BSGROWUP_H

#include "acnlwa/Base.h"
#include "acnlwa/script/ITalkRecept.h"

class BsGrowUp : public ::Base {
public:
    class Recept : public ::script::ITalkRecept {
    public:
        virtual ~Recept();
        virtual void ITalkRecept_VF38();
        virtual void ITalkRecept_VF62(unsigned char *);
    };

    virtual ~BsGrowUp();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSGROWUP_H
