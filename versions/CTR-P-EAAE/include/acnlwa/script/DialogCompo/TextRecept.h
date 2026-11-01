#ifndef ACNLWA_SCRIPT_DIALOGCOMPO_TEXTRECEPT_H
#define ACNLWA_SCRIPT_DIALOGCOMPO_TEXTRECEPT_H

#include "acnlwa/script/IUiRecept.h"

namespace script {
namespace DialogCompo {

class TextRecept : public ::script::IUiRecept {
public:
    virtual ~TextRecept();
    virtual unsigned int VF37();
    virtual unsigned int VF38();
};

}  // namespace DialogCompo
}  // namespace script

#endif  // ACNLWA_SCRIPT_DIALOGCOMPO_TEXTRECEPT_H
