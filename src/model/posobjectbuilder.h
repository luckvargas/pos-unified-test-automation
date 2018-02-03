#ifndef POSOBJECTBUILDER_H
#define POSOBJECTBUILDER_H

#include "posobject.h"

class PosObjectBuilder
{
public:
    static PosObject* getPos(PosModel model);

private:
    PosObjectBuilder();
    static PosObject *parse(QString jsonPath);
};

#endif // POSOBJECTBUILDER_H