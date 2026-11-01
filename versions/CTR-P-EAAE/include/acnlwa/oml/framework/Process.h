#ifndef ACNLWA_OML_FRAMEWORK_PROCESS_H
#define ACNLWA_OML_FRAMEWORK_PROCESS_H

namespace oml {
namespace framework {

class Process {
public:
    virtual void Process_VF00();
    virtual void Process_VF01();
    virtual int Process_VF02();
    virtual unsigned int Process_VF03();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual unsigned int Process_VF06();
    virtual void Process_VF07();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual void Process_VF10();
    virtual int Process_VF11();
    virtual unsigned int Process_VF12();
    virtual void Process_VF13();
    virtual void Process_VF14();
};

}  // namespace framework
}  // namespace oml

#endif  // ACNLWA_OML_FRAMEWORK_PROCESS_H
