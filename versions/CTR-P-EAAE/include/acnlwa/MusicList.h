#ifndef ACNLWA_MUSICLIST_H
#define ACNLWA_MUSICLIST_H

#include "acnlwa/InstSelect.h"

class MusicList : public ::InstSelect<8> {
public:
    virtual ~MusicList();
    virtual void VF08();
    virtual void VF13();
    virtual void VF25();
};

#endif  // ACNLWA_MUSICLIST_H
