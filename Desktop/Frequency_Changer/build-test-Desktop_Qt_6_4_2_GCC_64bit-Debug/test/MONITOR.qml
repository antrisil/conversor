import QtQuick
import QtQuick.Controls



Item{
    width: 640
    height: 480
    property int larguraTela: 640
    property int alturaTela: 480



    Rectangle{
        id: retangulo1
        width: parent.width * 0.5
        height: parent.height * 0.5
        anchors.top: parent.top
        color: "white"
        border.color: "black"
        border.width: 1

        Text{
            id: voltIn
            text: "VoltIn"
            font.pointSize: 12
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) - 70
        }

         Text {
            id: voltInValueL1
            text: qsTr("L1: "+ (pcan.getAB / 10.0))
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) -50
        }



        Text{
            id: voltInValueL2
            text: qsTr("L2: " + pcan.getBC / 10.0)
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) -10
        }

        Text{
            id: voltInValueL3
            text: qsTr("L3: " + pcan.getCA / 10.0)
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) +30
        }
    }

    Rectangle{
        id: retangulo3
        width: parent.width * 0.5
        height: parent.height * 0.5
        anchors.right: parent.right
        color: "white"
        border.color: "black"
        border.width: 1

        Text {
            id: voltOut
            text: qsTr("VoltOut")
            font.pointSize: 12
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) - 70
        }


        Text {
            id: voltOutValueL1
            text: qsTr("L1: " + (pcan.getInvPhaseAVolt / 10.0))
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) -50
        }


        Text{
            id: voltOutValueL2
            text: qsTr("L2: " + (pcan.getInvPhaseBVolt / 10.0))
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) -10
        }

        Text{
            id: voltOutValueL3
            text: qsTr("L3: " + (pcan.getInvPhaseCVolt / 10.0))
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
            y: (parent.height / 2) +30
        }
    }

    Rectangle{
        id: retangulo4
        width: parent.width * 0.5
        height: parent.height * 0.5
        anchors.top: retangulo3.bottom
        anchors.right: parent.right
        color: "white"
        border.color: "black"
        border.width: 1

        Text {
            id: settings
            text: qsTr("MENU")
            font.pointSize: 28
            x: 70
            anchors.verticalCenter: parent.verticalCenter
        }
    }

    Rectangle{
        id: retangulo2
        width: parent.width * 0.5
        height: parent.height * 0.5
        anchors.top: retangulo1.bottom
        color: "white"
        border.color: "black"
        border.width: 1

        Text {
            id: startStop
            color: "#04ff00"
            text: "START"
            font.pointSize: 30
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: circle
        width: 200
        height: width
        radius: width/2
        color: "white"
        border.color: "black"
        border.width: 2
        anchors.centerIn: parent

        Text{
            id: load
            text: "LOAD"
            font.pointSize: 12
            anchors.horizontalCenter: parent.horizontalCenter
            y: parent.height / 2 - 50
        }

        Text {
            id: loadValue
            text: qsTr(pcan.getLoad + "%")
            font.pointSize: 30
            anchors.horizontalCenter: parent.horizontalCenter
            y: parent.height / 2 - 20
        }

    }

    Rectangle{
        id: buttons1
        width:80
        height: alturaTela - 100
        radius: 10
        border.color: "black"
        border.width: 1
        x: -20; y: 50

        Image {
            id: arrow
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/barra1.png"
            width: 50
            x: 25; y:50
            transformOrigin: Item.Center
            rotation: 180
        }

        Image {
            id: startop
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/power.png"
            width: 50
            x: 25; y:290

        }
    }

    Rectangle{
        id: buttons2
        width:80
        height: alturaTela - 100
        radius: 10
        border.color: "black"
        border.width: 1
        x: larguraTela-60; y: 50

        Image {
            id: arrow2
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/arrow.jpg"
            width: 50
            x: 5; y:50
        }

        Image {
            id: settingsIcon
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/settings.png"
            width: 50
            x: 5; y:290

        } 
    }

    SequentialAnimation{
        loops: Animation.Infinite

        ColorAnimation {
            target: circle
            property: "border.color"
            from: "black"
            to: "blue"
            duration: 1500
            running: true
        }

        PauseAnimation {
            duration: 1000
        }

        ColorAnimation {
            target: circle
            property: "border.color"
            from: "blue"
            to: "black"
            duration: 1500
            running: true
        }
        running: true
    }
}

