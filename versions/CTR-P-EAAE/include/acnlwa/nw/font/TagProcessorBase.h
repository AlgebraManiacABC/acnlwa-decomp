#ifndef ACNLWA_NW_FONT_TAGPROCESSORBASE_H
#define ACNLWA_NW_FONT_TAGPROCESSORBASE_H

namespace nw {
namespace font {

template <typename T0>
class TagProcessorBase {
public:
    virtual ~TagProcessorBase();
    virtual void VF02();
    virtual void VF03();
};

template <typename T0>
TagProcessorBase<T0>::~TagProcessorBase() {}

template <typename T0>
void TagProcessorBase<T0>::VF02() {}

template <typename T0>
void TagProcessorBase<T0>::VF03() {}


}  // namespace font
}  // namespace nw

#endif  // ACNLWA_NW_FONT_TAGPROCESSORBASE_H
