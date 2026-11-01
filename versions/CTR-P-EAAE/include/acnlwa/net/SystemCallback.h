#ifndef ACNLWA_NET_SYSTEMCALLBACK_H
#define ACNLWA_NET_SYSTEMCALLBACK_H

namespace net {

class SystemCallback {
public:
    virtual ~SystemCallback();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace net

#endif  // ACNLWA_NET_SYSTEMCALLBACK_H
