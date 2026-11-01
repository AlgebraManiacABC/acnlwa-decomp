#ifndef ACNLWA_NN_BOSS_DATASTOREDOWNLOADACTION_H
#define ACNLWA_NN_BOSS_DATASTOREDOWNLOADACTION_H

#include "acnlwa/nn/boss/TaskAction.h"

namespace nn {
namespace boss {

class DataStoreDownloadAction : public ::nn::boss::TaskAction {
public:
    virtual ~DataStoreDownloadAction();
    virtual void VF02();
};

}  // namespace boss
}  // namespace nn

#endif  // ACNLWA_NN_BOSS_DATASTOREDOWNLOADACTION_H
