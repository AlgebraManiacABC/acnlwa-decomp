#ifndef ACNLWA_SCRIPT_WORDPTRSV_H
#define ACNLWA_SCRIPT_WORDPTRSV_H

#include "acnlwa/script/WordPtr.h"

namespace script {

class WordPtrSv : public ::script::WordPtr {
public:
    virtual ~WordPtrSv();
    virtual void VF11();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDPTRSV_H
