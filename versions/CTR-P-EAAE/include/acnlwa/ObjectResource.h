#ifndef ACNLWA_OBJECTRESOURCE_H
#define ACNLWA_OBJECTRESOURCE_H

class ObjectResource {
public:
    virtual ~ObjectResource();
    virtual void ObjectResource_VF02() = 0;
    virtual void ObjectResource_VF03() = 0;
    virtual void ObjectResource_VF04() = 0;
    virtual void ObjectResource_VF05() = 0;
    virtual void ObjectResource_VF06() = 0;
    virtual void ObjectResource_VF07() = 0;
    virtual void ObjectResource_VF08();
    virtual void ObjectResource_VF09();
    virtual void ObjectResource_VF10();
};

#endif  // ACNLWA_OBJECTRESOURCE_H
