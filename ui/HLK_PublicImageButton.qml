﻿import QtQuick 2.4
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtMultimedia 5.4
import QtGraphicalEffects 1.0
import "qrc:/base/js/common.js" as JSL

Button{

    height: 70
    property string imgPath: ""
    property string btnText: ""
    property int btnwidth: 174
    property string themeColor: JSL.themeColor()
    property string button_sound: "qrc:/sounds/sounds/about.wav"
    property bool isShowAdd: true
    property bool isShowRight: false

    width: btnwidth
    style: ButtonStyle{
        background: Rectangle{
            anchors.fill: parent
            color: "#EDEDED"
            border.width: pressed ? 1 : 0
            border.color: pressed ? themeColor : "#EDEDED"
            layer.enabled: pressed ? true : false
            layer.effect: DropShadow {
                transparentBorder: true
                color: themeColor
                radius:  8
                samples: 16
            }
            Image{
                anchors.fill: parent
                source: imgPath
//                Row{
//                    // anchors.centerIn: parent
//                     spacing:10
                    Image{
                       // anchors.verticalCenter: parent.verticalCenter
                        source: "qrc:/images/images/fk_add.png"
                        anchors.top: parent.top
                        anchors.topMargin: 25
                        anchors.right: centertext.left
                        anchors.rightMargin: 10
                        visible: isShowAdd
                    }
                    Text{
                        id:centertext
                        anchors.centerIn: parent
                        font.family: "SimHei"
                        font.pixelSize: 30
                        font.bold: true
                        color: "#FFFFFF"
                        text: btnText
                    }
//                }
                Image{
                    anchors.right: parent.right
                    anchors.rightMargin: 20
                    anchors.verticalCenter: parent.verticalCenter
                    source: "qrc:/images/images/fk_right.png"
                    visible: isShowRight
                }
            }
        }
    }
//    Audio{
//        id: sound
//        source: button_sound
//    }
//    onClicked: {
//        sound.play()
//    }
}


