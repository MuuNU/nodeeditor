#include "mygraphicsarrow.h"
#include <QStyle>
#include <QStyleOptionGraphicsItem>
#include <QPainter>
MyGraphicsArrow::MyGraphicsArrow(MyGraphicsItem *startNode, MyGraphicsItem *endNode, QGraphicsItem *parent)
{
    startNode_= startNode;
    endNode_ = endNode;
    this->setFlag(QGraphicsItem::ItemIsMovable);

}

// Вот тут какая-то ебанина происходит
//
//      #
//      #
//  #   #   #
//   #  #  #
//    # # #
//      #

void MyGraphicsArrow::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    painter->setPen(QPen(Qt::black, 5, Qt::SolidLine));
    painter->drawLine(startNode_->pos(), endNode_->pos());

    qDebug() << startNode_->pos() << " startNode_";
    qDebug() << endNode_->pos() << " endNode_";
}

void MyGraphicsArrow::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
//    QPainter* painter = new QPainter();
//    painter->setPen(QPen(Qt::black, 5, Qt::SolidLine));
//    painter->drawLine(startNode_->pos(), endNode_->pos());
//    const QStyleOptionGraphicsItem *option = new QStyleOptionGraphicsItem();
//    this->paint(painter, option);
}



QRectF MyGraphicsArrow::boundingRect() const
{
    return QRectF(0, 0, 0, 0);
}
