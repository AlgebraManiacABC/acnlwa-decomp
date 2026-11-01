#ifndef ACNLWA_G3D_TRANSFORMNODE_H
#define ACNLWA_G3D_TRANSFORMNODE_H

namespace g3d {

class TransformNode {
public:
    virtual ~TransformNode();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_TRANSFORMNODE_H
