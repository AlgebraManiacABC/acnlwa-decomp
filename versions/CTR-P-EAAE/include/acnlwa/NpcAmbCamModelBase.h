#ifndef ACNLWA_NPCAMBCAMMODELBASE_H
#define ACNLWA_NPCAMBCAMMODELBASE_H

template <typename T0>
class NpcAmbCamModelBase : public T0 {
public:
    virtual ~NpcAmbCamModelBase();
    virtual void VF09();
};

template <typename T0>
NpcAmbCamModelBase<T0>::~NpcAmbCamModelBase() {}

template <typename T0>
void NpcAmbCamModelBase<T0>::VF09() {}


#endif  // ACNLWA_NPCAMBCAMMODELBASE_H
