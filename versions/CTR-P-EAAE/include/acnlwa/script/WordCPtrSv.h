#ifndef ACNLWA_SCRIPT_WORDCPTRSV_H
#define ACNLWA_SCRIPT_WORDCPTRSV_H

#include "acnlwa/script/WordCPtr.h"

namespace script {

class WordCPtrSv : public ::script::WordCPtr {
public:
    virtual ~WordCPtrSv();
    virtual void VF11();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDCPTRSV_H
