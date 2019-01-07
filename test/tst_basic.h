#ifndef BASIC_H
#define BASIC_H

#include <QtTest>
#include <QCoreApplication>
#include <QQmlEngine>
#include <QQmlContext>
#include <QtQuick>

class basic : public QObject
{
    Q_OBJECT

public:
    using QObject::QObject;

    basic();
    ~basic();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

private:
    QQmlEngine engine;
    QObject *object;
    QQuickView view;
};


#endif // BASIC_H
