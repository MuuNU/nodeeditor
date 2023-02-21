#ifndef MYGRAPHICSARROW_H
#define MYGRAPHICSARROW_H

#include <QGraphicsLineItem>
#include <QGraphicsItem>
#include "mygraphicsitem.h"
class MyGraphicsArrow : public QGraphicsItem
{
public:
    MyGraphicsArrow(MyGraphicsItem* startNode, MyGraphicsItem* endNode, QGraphicsItem* parent = nullptr);
    QRectF boundingRect() const override;

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;


private:
    MyGraphicsItem* startNode_;
    MyGraphicsItem* endNode_;

};
#endif // MYGRAPHICSARROW_H
