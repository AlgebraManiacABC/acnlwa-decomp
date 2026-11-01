#ifndef ACNLWA_SCRIPT_PROJECT_SINGLETONDISPOSER__H
#define ACNLWA_SCRIPT_PROJECT_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace script {
namespace Project {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace Project
}  // namespace script

#endif  // ACNLWA_SCRIPT_PROJECT_SINGLETONDISPOSER__H
