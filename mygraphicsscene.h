#ifndef MYGRAPHICSSCENE_H
#define MYGRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QObject>

#include "MyGraphicsItem.h"
#include "mygraphicsarrow.h"

class MyGraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    MyGraphicsScene(QObject* parent = nullptr);

//    void setNodeText(MyGraphicsItem* node, const QString& text = QString());
//    MyGraphicsItem* getNodeAt(const QPointF& pos);

//    void removeNode(MyGraphicsItem* node);

//    void clear();

//signals:
//    void nodePositionChanged(MyGraphicsItem* node, const QPointF& newPos);
//    void nodeTextChanged(MyGraphicsItem* node, const QString& newText);
//    void nodeSelected(MyGraphicsItem* node);
//    void nodeUnselected(MyGraphicsItem* node);


protected:
//    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
//    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
//    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;


//private:
//    QPointF m_lastMousePos;
//    QMap<QGraphicsItem*, MyGraphicsItem*> m_itemsMap;

//    void addNode(MyGraphicsItem* node);

};

#endif // MYGRAPHICSSCENE_H
