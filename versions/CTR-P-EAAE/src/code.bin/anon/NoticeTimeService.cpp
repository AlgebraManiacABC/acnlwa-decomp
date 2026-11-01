#include "acnlwa/NoticeLoadAdapt.h"

namespace {

class NoticeTimeService : public ::NoticeLoadAdapt {
public:
    virtual ~NoticeTimeService();
};

NoticeTimeService::~NoticeTimeService() {}

}  // namespace
