#include "tst_basic.h"

basic::basic()
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:../app/Display.qml")));
    object = component.create();
    object = view.rootObject();
}

basic::~basic()
{

}

void basic::initTestCase()
{

}

void basic::cleanupTestCase()
{

}

void basic::test_case1()
{
    QQuickItem *item = object->findChild<QQuickItem*>("lastNameField");
    if (item) {
        qDebug() << "Place holder test: " << item->property("placeholderText");
    } else {
        qDebug() << "Did not work";
    }

}

QTEST_MAIN(basic)

//#include "tst_basic.moc"
