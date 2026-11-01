#include "acnlwa/nn/os/AutoStackManager.h"

namespace nn {
namespace os {
namespace {

class DefaultAutoStackManager : public ::nn::os::AutoStackManager {
public:
    virtual ~DefaultAutoStackManager();
    virtual void VF02();
    virtual void VF03();
};

DefaultAutoStackManager::~DefaultAutoStackManager() {}

void DefaultAutoStackManager::VF02() {}

void DefaultAutoStackManager::VF03() {}

}  // namespace
}  // namespace os
}  // namespace nn
