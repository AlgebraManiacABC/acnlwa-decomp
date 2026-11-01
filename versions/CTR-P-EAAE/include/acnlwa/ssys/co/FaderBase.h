#ifndef ACNLWA_SSYS_CO_FADERBASE_H
#define ACNLWA_SSYS_CO_FADERBASE_H

namespace ssys {
namespace co {

class FaderBase {
public:
    virtual ~FaderBase();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07() = 0;
};

}  // namespace co
}  // namespace ssys

#endif  // ACNLWA_SSYS_CO_FADERBASE_H
