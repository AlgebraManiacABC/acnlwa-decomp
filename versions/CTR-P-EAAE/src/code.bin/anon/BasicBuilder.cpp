#include "acnlwa/FieldBuilder.h"

namespace {

class BasicBuilder : public ::FieldBuilder {
public:
    virtual ~BasicBuilder();
};

BasicBuilder::~BasicBuilder() {}

class CampNpcBuilder : public ::BasicBuilder {
public:
    virtual ~CampNpcBuilder();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

CampNpcBuilder::~CampNpcBuilder() {}

void CampNpcBuilder::VF02() {}

void CampNpcBuilder::VF03() {}

void CampNpcBuilder::VF04() {}

void CampNpcBuilder::VF05() {}

void CampNpcBuilder::VF06() {}

void CampNpcBuilder::VF07() {}

void CampNpcBuilder::VF08() {}

void CampNpcBuilder::VF09() {}

void CampNpcBuilder::VF10() {}

class ElmFieldBuilder : public ::BasicBuilder {
public:
    virtual ~ElmFieldBuilder();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

ElmFieldBuilder::~ElmFieldBuilder() {}

void ElmFieldBuilder::VF02() {}

void ElmFieldBuilder::VF03() {}

void ElmFieldBuilder::VF04() {}

void ElmFieldBuilder::VF05() {}

void ElmFieldBuilder::VF06() {}

void ElmFieldBuilder::VF07() {}

void ElmFieldBuilder::VF08() {}

void ElmFieldBuilder::VF09() {}

void ElmFieldBuilder::VF10() {}

class ExhibitionBuilder : public ::ElmFieldBuilder {
public:
    virtual ~ExhibitionBuilder();
    virtual void VF06();
};

ExhibitionBuilder::~ExhibitionBuilder() {}

void ExhibitionBuilder::VF06() {}

class ModelHouseFieldBuilder : public ::BasicBuilder {
public:
    virtual ~ModelHouseFieldBuilder();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

ModelHouseFieldBuilder::~ModelHouseFieldBuilder() {}

void ModelHouseFieldBuilder::VF02() {}

void ModelHouseFieldBuilder::VF03() {}

void ModelHouseFieldBuilder::VF04() {}

void ModelHouseFieldBuilder::VF05() {}

void ModelHouseFieldBuilder::VF06() {}

void ModelHouseFieldBuilder::VF07() {}

void ModelHouseFieldBuilder::VF08() {}

void ModelHouseFieldBuilder::VF09() {}

void ModelHouseFieldBuilder::VF10() {}

class MuseumFossilBuilder : public ::ElmFieldBuilder {
public:
    virtual ~MuseumFossilBuilder();
    virtual void VF06();
};

MuseumFossilBuilder::~MuseumFossilBuilder() {}

void MuseumFossilBuilder::VF06() {}

class MuseumPictureBuilder : public ::ElmFieldBuilder {
public:
    virtual ~MuseumPictureBuilder();
    virtual void VF06();
};

MuseumPictureBuilder::~MuseumPictureBuilder() {}

void MuseumPictureBuilder::VF06() {}

class ShopGraceBuilder : public ::BasicBuilder {
public:
    virtual ~ShopGraceBuilder();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

ShopGraceBuilder::~ShopGraceBuilder() {}

void ShopGraceBuilder::VF02() {}

void ShopGraceBuilder::VF03() {}

void ShopGraceBuilder::VF04() {}

void ShopGraceBuilder::VF05() {}

void ShopGraceBuilder::VF06() {}

void ShopGraceBuilder::VF07() {}

void ShopGraceBuilder::VF08() {}

void ShopGraceBuilder::VF09() {}

void ShopGraceBuilder::VF10() {}

class VillagePrologueBuilder : public ::BasicBuilder {
public:
    virtual ~VillagePrologueBuilder();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

VillagePrologueBuilder::~VillagePrologueBuilder() {}

void VillagePrologueBuilder::VF02() {}

void VillagePrologueBuilder::VF03() {}

void VillagePrologueBuilder::VF04() {}

void VillagePrologueBuilder::VF05() {}

void VillagePrologueBuilder::VF06() {}

void VillagePrologueBuilder::VF07() {}

void VillagePrologueBuilder::VF08() {}

void VillagePrologueBuilder::VF09() {}

void VillagePrologueBuilder::VF10() {}

}  // namespace
