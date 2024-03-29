/* Copyright (c) 2013 Research In Motion Limited.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import bb.cascades 1.0
import bb.cascades.pickers 1.0

Page {
    id: infoPage

    // Custom signal for notifying that this page needs to be closed
    signal done ()
    
    titleBar: TitleBar {
        title: "Info"
        dismissAction: ActionItem {
            title: "Close"
            onTriggered: {
                // Emit the custom signal here to indicate that this page needs to be closed
                // The signal would be handled by the page which invoked it
                infoPage.done();
            }
        }
    }
    
    Container {
        ImageView{
            horizontalAlignment: HorizontalAlignment.Fill
                            verticalAlignment: VerticalAlignment.Fill
                            imageSource: "asset:///images/infoback.png"
            }
        //background: Color.create("#546129")
        layout: DockLayout {
        }
        Container {
            layout: StackLayout {
            }
            verticalAlignment: VerticalAlignment.Top
            horizontalAlignment: HorizontalAlignment.Center
            TextArea{
                            text: "Information\n"
                            editable: false
                            textStyle.fontSize: FontSize.XXLarge
                            textStyle.fontStyle: FontStyle.Default
                            textStyle.textAlign: TextAlign.Center
                            textStyle.fontWeight: FontWeight.Bold
                            }
                            
            TextArea {
                text: "This app the Holy Quran fascilitates Holy Quran reader to use smooth features of BB10 while reading with great graphic quality as well as inbuilt BBM features.\n\n" +
                "The most beautifull feature of this app is while reading, you can also save note for fast reference and having built in support for Bookmarking."+
                "\n Also you can change the translations from settings menu by swipping page down from top"+
                "\nDirectly you can jump to the different verse, copy verse and share it via NFC or on Social media"+ 
                "\nFinally a built in support for fast lookup for any Surah or any text within Surah via Search field provided in app"+
                 "\nYou can directly invite for download from this app via BBM feature.\n\n" +
                 "For any bug or app improvement, Please feel free to Contact me at:\n myaseen.khan@hotmail.com "+ 
                "\nAuthor:\n" + 
                "Yaseen Khan\n"+
                "BlackBerry Developer Group Manager and Group Leader"
                              
                
                editable: false
                scrollMode: TextAreaScrollMode.Stiff
                textStyle.fontSize: FontSize.Medium
                textStyle.fontStyle: FontStyle.Italic
                textStyle.textAlign: TextAlign.Justify
                textStyle.color: Color.create("# 682000")
            }
            
        } // Container StackLyaout
    } // Container DockLayout
    
} // Page