#include "acnlwa/NoticeLoadAdapt.h"

namespace {

class NoticeEyecatcher : public ::NoticeLoadAdapt {
public:
    virtual ~NoticeEyecatcher();
};

NoticeEyecatcher::~NoticeEyecatcher() {}

}  // namespace
