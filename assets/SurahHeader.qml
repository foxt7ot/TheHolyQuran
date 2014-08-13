import bb.cascades 1.0

Container{
    property alias surah: surahTitle.imageSource
    property alias title: textTitle.text
    layout: DockLayout {
        
    }
    
    ImageView {
        imageSource: surah != "" ? "images/headerabove2_polos.amd" : "images/headerabove2_logo.amd" //"asset:///images/headerabove2.amd"
        layoutProperties: StackLayoutProperties {
            spaceQuota: 1
        }
        preferredWidth: 1280
    }
    Container {
        //background: backgroundPaint.imagePaint
//        attachedObjects: [
//            ImagePaintDefinition {
//                id: backgroundPaint
//                imageSource: surah != "" ? "images/headerabove2_polos.amd" : "images/headerabove2_logo.amd" //"asset:///images/headerabove2.amd"
//                //            repeatPattern: RepeatPattern.XY
//            }
//        ]
        layout: StackLayout {
            orientation: LayoutOrientation.LeftToRight
        }
        
        ImageButton {
            horizontalAlignment: HorizontalAlignment.Left
            defaultImageSource: "images/header_left.png"
            pressedImageSource: "images/header_left.png"
        }
        ImageView {
            id: surahTitle
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Center
            layoutProperties: StackLayoutProperties {
                spaceQuota: 1
            }
            scalingMethod: ScalingMethod.AspectFit
            visible: surah != ""
        }
        Label {
            id: textTitle
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Center
            visible: surah == ""
            textStyle {
                base: SystemDefaults.TextStyles.BigText
                fontWeight: FontWeight.Bold
                fontSize: FontSize.Large
                textAlign: TextAlign.Center
            }
            layoutProperties: StackLayoutProperties {
                spaceQuota: 1
            }
        }
        ImageButton {
            horizontalAlignment: HorizontalAlignment.Right
            defaultImageSource: "images/header_right.png"
            pressedImageSource: "images/header_right.png"
        }
    }
}

