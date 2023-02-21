#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include "mygraphicsitem.h"
#include "mygraphicsarrow.h"
#include "mygraphicsscene.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Создаем QGraphicsScene и добавляем на него объект MyGraphicsItem
    MyGraphicsScene* scene = new MyGraphicsScene(this);
    MyGraphicsItem* item = new MyGraphicsItem();
    scene->addItem(item);
    MyGraphicsItem* item2 = new MyGraphicsItem();
    scene->addItem(item2);
    MyGraphicsArrow* arrow1 = new MyGraphicsArrow(item, item2);
    scene->addItem(arrow1);



    // Создаем QGraphicsView, устанавливаем на него созданную сцену и добавляем на главное окно
    QGraphicsView* view = new QGraphicsView(scene);
    setCentralWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}

