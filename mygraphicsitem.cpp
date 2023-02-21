#include "mygraphicsitem.h"
#include "QGraphicsSceneMoveEvent"

MyGraphicsItem::MyGraphicsItem(QGraphicsItem* parent)
{
    this->setFlag(QGraphicsItem::ItemIsMovable);
}

QRectF MyGraphicsItem::boundingRect() const
{
    return QRectF(-50, -50, 100, 100);
}

void MyGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Рисуем прямоугольник со скруглёнными краями, залитый жёлтым цветом
    QRectF rect = boundingRect();
    painter->setBrush(QColor(255, 255, 0));
    painter->setPen(QPen(Qt::black));
    painter->drawRoundedRect(rect, 10, 10);
}

void MyGraphicsItem::setNodeText(const QString &text)
{

}

void MyGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

void MyGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void MyGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        setPos(mapToScene(event->pos() - event->lastPos()));
    }
}
