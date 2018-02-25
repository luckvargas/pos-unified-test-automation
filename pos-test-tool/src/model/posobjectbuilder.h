#ifndef POSOBJECTBUILDER_H
#define POSOBJECTBUILDER_H

#include "pos_types.h"
#include "posobject.h"

class PosObjectBuilder {
public:
    static PosObject* getPosObject(PosModel model);

private:
    PosObjectBuilder();
    static PosObject* parse(QString jsonPath);
};

#endif // POSOBJECTBUILDER_H
