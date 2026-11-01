#ifndef ACNLWA_SCRIPT_LOADER_LOADSPLIT_H
#define ACNLWA_SCRIPT_LOADER_LOADSPLIT_H

#include "acnlwa/dLoadSplit.h"

namespace script {
namespace Loader {

class LoadSplit : public ::dLoadSplit {
public:
    virtual ~LoadSplit();
    virtual void VF03();
};

}  // namespace Loader
}  // namespace script

#endif  // ACNLWA_SCRIPT_LOADER_LOADSPLIT_H
