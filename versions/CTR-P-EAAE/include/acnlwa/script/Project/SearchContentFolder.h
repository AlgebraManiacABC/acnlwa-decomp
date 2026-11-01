#ifndef ACNLWA_SCRIPT_PROJECT_SEARCHCONTENTFOLDER_H
#define ACNLWA_SCRIPT_PROJECT_SEARCHCONTENTFOLDER_H

#include "acnlwa/script/Project/ISearchContentCondition.h"

namespace script {
namespace Project {

class SearchContentFolder : public ::script::Project::ISearchContentCondition {
public:
    virtual void VF00();
    virtual ~SearchContentFolder();
};

}  // namespace Project
}  // namespace script

#endif  // ACNLWA_SCRIPT_PROJECT_SEARCHCONTENTFOLDER_H
