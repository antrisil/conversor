import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "lightgrey"

    Rectangle
    {
        id: main_rect
        anchors.fill: parent
        color: "transparent"
        Text {
            id: txt1
            text: qsTr("Good Morning!")
            anchors.centerIn: parent
            color: "blue"
        }
        Text {
            id: txt2
            text: qsTr("%L1").arg(Number(3251.1))
            anchors.top: txt1.bottom
            anchors.topMargin: 2
            anchors.horizontalCenter: parent.horizontalCenter
            color: "red"
        }
        Text {
            id: txt3
            text: qsTr("%1").arg(Date().toLocaleString(Qt.locale()))
            anchors.top: txt2.bottom
            anchors.topMargin: 2
            anchors.horizontalCenter: parent.horizontalCenter
            color: "green"
        }


        MouseArea {
            property bool areaclicked: false
            anchors.fill: parent
            onClicked: { areaclicked ? translator.selectLanguage("") : translator.selectLanguage("pt_PT"); areaclicked = !areaclicked }
        }

        Connections {
            target: translator
            function onLanguageChanged() {
                color = Qt.rgba(Math.random(), Math.random(), Math.random(), 1)
            }
        }
    }
}
