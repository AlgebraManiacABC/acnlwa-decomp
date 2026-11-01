#ifndef ACNLWA_SCRIPT_MAILMGR_SINGLETONDISPOSER__H
#define ACNLWA_SCRIPT_MAILMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace script {
namespace MailMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace MailMgr
}  // namespace script

#endif  // ACNLWA_SCRIPT_MAILMGR_SINGLETONDISPOSER__H
