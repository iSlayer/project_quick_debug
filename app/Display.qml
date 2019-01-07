import QtQuick 2.11
import QtQuick.Controls 2.2
import QtQuick.VirtualKeyboard 2.2
import QtQuick.Window 2.11

ApplicationWindow {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Item {
        id: element
        x: 0
        y: 0
        width: 640
        height: 480
    }

    TextField {
        id: lastNameField
        objectName: "lastNameField"
        x: 154
        y: 48
        width: 98
        height: 31
        text: qsTr("")
        placeholderText: "Last Name"
        horizontalAlignment: Text.AlignHCenter
    }
}
