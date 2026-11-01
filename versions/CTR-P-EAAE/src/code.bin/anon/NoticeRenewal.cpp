#include "acnlwa/NoticeLoadAdapt.h"

namespace {

class NoticeRenewal : public ::NoticeLoadAdapt {
public:
    virtual ~NoticeRenewal();
};

NoticeRenewal::~NoticeRenewal() {}

}  // namespace
