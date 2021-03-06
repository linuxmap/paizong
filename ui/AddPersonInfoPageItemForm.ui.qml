﻿import QtQuick 2.4
import "qrc:/controls/ui"
import "qrc:/cascade/ui"
Item {
    width: 400
    height: 300
    property alias progressBar: progressBar

    HLK_ToolProgressBar{
        id: progressBar
        x:PAGELOCAL ? 0 : 20
        ctrlHeight: page.height
        ctrlText: PAGETITLE
        ctrlIcon: PAGEICON
        ctrlTopLine: true
        ctrlBottomLine: PAGEBOTTOMLINE
    }
    AddPersonInfoPage{
        id: page
        x: PAGELOCAL ? 95 : 115
    }

}
