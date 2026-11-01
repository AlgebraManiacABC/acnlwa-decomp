#ifndef ACNLWA_NN_BOSS_TASKACTION_H
#define ACNLWA_NN_BOSS_TASKACTION_H

#include "acnlwa/nn/boss/TaskActionBase.h"

namespace nn {
namespace boss {

class TaskAction : public ::nn::boss::TaskActionBase {
public:
    virtual ~TaskAction();
    virtual void VF02();
};

}  // namespace boss
}  // namespace nn

#endif  // ACNLWA_NN_BOSS_TASKACTION_H
