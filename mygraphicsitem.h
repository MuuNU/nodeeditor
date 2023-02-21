#ifndef MYGRAPHICSITEM_H
#define MYGRAPHICSITEM_H

#include <QGraphicsObject>
#include <QRectF>
#include <QPainter>

class MyGraphicsArrow;

class MyGraphicsItem : public QGraphicsObject {
public:
    MyGraphicsItem(QGraphicsItem* parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr) override;
    void setNodeText(const QString& text);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;

private:
    QString m_nodeText;
    QPointF m_dragStartPos;
    QPointF m_originalPos;
    bool m_isDragging;
    QPainter painter;
    QRectF rect;
};

#endif // MYGRAPHICSITEM_H
