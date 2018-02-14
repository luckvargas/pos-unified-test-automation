#ifndef POSOBJECT_H
#define POSOBJECT_H

#include <QtCore>

struct KeyMap {
    QPointF position;
    QStringList keyList;
};

enum class PosModel {
    PAX_S920
};

class PosObject
{
public:
    QPair<QPointF, int> getKeyPosition(QString desiredKey);

private:
    PosObject();

    QString m_model;
    QString m_vendor;
    int m_width;
    int m_height;
    QRect m_keyboardROI;
    QRect m_screenROI;
    QList<KeyMap> m_keyboardMap;

    QPointF m_positionOffset;
    friend class PosObjectBuilder;
};

#endif // POSOBJECT_H
