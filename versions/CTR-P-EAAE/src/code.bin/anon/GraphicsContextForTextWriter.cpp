#include "acnlwa/sead/GraphicsContext.h"

namespace {

class GraphicsContextForTextWriter : public ::sead::GraphicsContext {
public:
    virtual ~GraphicsContextForTextWriter();
};

GraphicsContextForTextWriter::~GraphicsContextForTextWriter() {}

}  // namespace
