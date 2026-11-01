#ifndef ACNLWA_ACNPCOUT_H
#define ACNLWA_ACNPCOUT_H

#include "acnlwa/AcNpcNml.h"

class AcNpcOut : public ::AcNpcNml {
public:
    class OutTalkRcpt : public ::AcNpcNml::TalkRcpt {
    public:
        virtual ~OutTalkRcpt();
    };

    virtual ~AcNpcOut();
};

#endif  // ACNLWA_ACNPCOUT_H
