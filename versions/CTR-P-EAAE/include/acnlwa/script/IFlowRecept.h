#ifndef ACNLWA_SCRIPT_IFLOWRECEPT_H
#define ACNLWA_SCRIPT_IFLOWRECEPT_H

namespace script {

class IFlowRecept {
public:
    virtual ~IFlowRecept();
    virtual void IFlowRecept_VF02();
    virtual void IFlowRecept_VF03();
    virtual void IFlowRecept_VF04();
    virtual unsigned int IFlowRecept_VF05();
    virtual unsigned int IFlowRecept_VF06();
    virtual void IFlowRecept_VF07();
    virtual void IFlowRecept_VF08();
    virtual void IFlowRecept_VF09();
    virtual unsigned int IFlowRecept_VF10();
    virtual unsigned int IFlowRecept_VF11();
    virtual unsigned int IFlowRecept_VF12();
    virtual unsigned int IFlowRecept_VF13();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_IFLOWRECEPT_H
