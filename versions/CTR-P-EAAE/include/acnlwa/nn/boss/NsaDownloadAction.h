#ifndef ACNLWA_NN_BOSS_NSADOWNLOADACTION_H
#define ACNLWA_NN_BOSS_NSADOWNLOADACTION_H

#include "acnlwa/nn/boss/TaskAction.h"

namespace nn {
namespace boss {

class NsaDownloadAction : public ::nn::boss::TaskAction {
public:
    virtual ~NsaDownloadAction();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace boss
}  // namespace nn

#endif  // ACNLWA_NN_BOSS_NSADOWNLOADACTION_H
