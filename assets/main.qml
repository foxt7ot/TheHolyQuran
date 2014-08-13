// Default empty project template
import bb.cascades 1.0

TabbedPane {
    attachedObjects: [
            
            Sheet {
                id: infoSheet
                // The following page refers to the InfoPage.qml
                InfoPage {
                    id: infoPage
                    // Handle the custom signal from InfoPage.qml
                    onDone : {
                        infoSheet.close();
                    }
                }
            },
                    Sheet {
                        id: settingsSheet
                        content: SettingsPage {
                            id: settingsPage
                            objectName: "settingspage"
                            index: app.getValueFor("LanguageSettings", 0)
                            onSettingsPageClose: {
                                settingsSheet.close();
                            }
                        }
                    }
        ]
Menu.definition: MenuDefinition {
        id: menu
        actions: [
            ActionItem {
                title: "Info"
                imageSource: "images/ic_info.png"
                onTriggered: {
                    console.log("Info: ActionItem : onTriggered");
                    // For InfoPage, we will use Sheet
                    infoSheet.open();
                }
            },
            ActionItem {
                        ActionBar.placement: ActionBarPlacement.InOverflow
                        imageSource: "images/ic_configicon.png"
                        title: "Settings"
                        onTriggered: {
                            settingsSheet.open();
                        }
                    }
            
        ]
                 
    }
//    attachedObjects: [
//        Sheet {
//            id: settingsSheet
//            content: SettingsPage {
//                id: settingsPage
//                index: app.getValueFor("LanguageSettings", 0)
//                onSettingsPageClose: {
//                    settingsSheet.close();
//                }
//            }
//        }
//    ]

    sidebarState: SidebarState.Hidden
    Tab {
        title: "Surah"
        imageSource: "images/sura_mark.png"
        content: SurahPage {
        }
    }
    Tab {
        title: "Juz"
        imageSource: "images/juzzbig.png"
        content: JuzPage {
        }
    }
    Tab {
        title: "Bookmarks"
        imageSource: "images/bookmark.png"
        content: BookmarkPage {
            id: bookmarkPage
        }
        onTriggered: {
            bookmarkPage.loadData();
        }
    }
    Tab {
        title: "Notes"
        imageSource: "images/note2.png"
        content: NotePage {
            id: notePage
        }
        onTriggered: {
            notePage.loadData();
        }
    }
    
//    Tab{
//        title : "Settings"
//        content : SettingsPage{
//            objectName: "settingspage"
//            }
//    }
    onCreationCompleted: {
        OrientationSupport.supportedDisplayOrientation = SupportedDisplayOrientation.All;
        
    }
            
}