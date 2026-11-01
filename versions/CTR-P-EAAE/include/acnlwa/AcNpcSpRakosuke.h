#ifndef ACNLWA_ACNPCSPRAKOSUKE_H
#define ACNLWA_ACNPCSPRAKOSUKE_H

#include "acnlwa/AcNpcSp.h"
#include "acnlwa/NpcSpTalkRecept.h"

class AcNpcSpRakosuke : public ::AcNpcSp {
public:
    class TalkRecept : public ::NpcSpTalkRecept {
    public:
        virtual ~TalkRecept();
    };

    virtual ~AcNpcSpRakosuke();
};

#endif  // ACNLWA_ACNPCSPRAKOSUKE_H
