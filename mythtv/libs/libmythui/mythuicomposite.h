#ifndef __MythTV__mythuicomposite__
#define __MythTV__mythuicomposite__

#include "mythuitype.h"
#include "mythtypes.h"

class MUI_PUBLIC MythUIComposite : public MythUIType
{
public:
    MythUIComposite(QObject *parent, const QString &name);
    ~MythUIComposite() override = default;

    virtual void SetTextFromMap(const InfoMap &infoMap);
    virtual void ResetMap(const InfoMap &infoMap);
};

#endif /* defined(__MythTV__mythuicomposite__) */
