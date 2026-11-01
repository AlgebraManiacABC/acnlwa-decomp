#ifndef ACNLWA_BSEVENTMGR_H
#define ACNLWA_BSEVENTMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/script/ITalkRecept.h"

class BsEventMgr : public ::Base {
public:
    class Recept : public ::script::ITalkRecept {
    public:
        virtual ~Recept();
        virtual void ITalkRecept_VF62(unsigned char *);
    };

    virtual ~BsEventMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
};

#endif  // ACNLWA_BSEVENTMGR_H
