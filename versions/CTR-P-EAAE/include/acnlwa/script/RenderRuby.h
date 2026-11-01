#ifndef ACNLWA_SCRIPT_RENDERRUBY_H
#define ACNLWA_SCRIPT_RENDERRUBY_H

#include "acnlwa/script/RenderBase.h"

namespace script {

class RenderRuby : public ::script::RenderBase {
public:
    virtual ~RenderRuby();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_RENDERRUBY_H
