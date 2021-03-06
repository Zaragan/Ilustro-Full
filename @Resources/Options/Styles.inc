{Global font style, size & color}
[Variables]
fontName=Courier New
textSize=8
colorBar=235,170,0,255
colorText=4169E1

{Meters styles}
[styleTitle]
StringAlign=CENTER
StringCase=UPPER
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,50
FontColor=255,255,255,205
FontFace=#fontName#
FontSize=11
AntiAlias=1
ClipString=1

[styleLeftText]
StringAlign=LEFT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleCenterText]
StringAlign=CENTER
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleRightText]
StringAlign=RIGHT
StringCase=NONE
StringStyle=BOLD
StringEffect=SHADOW
FontEffectColor=0,0,0,20
FontColor=#colorText#
FontFace=#fontName#
FontSize=#textSize#
AntiAlias=1
ClipString=1

[styleBar]
BarColor=#colorBar#
BarOrientation=HORIZONTAL
SolidColor=255,255,255,15

[styleSeperator]
SolidColor=255,255,255,15

[styleMidLine]
SolidColor=255,255,255,80
X=419
Y=40
W=1
H=240

{Update checker}
[StyleUpdateCheckerConnecting]
Text="#Update#: #Connecting#"
[StyleUpdateCheckerYes]
Text="#Update#: #Available#"
[StyleUpdateCheckerNo]
Text="#Update#: #Uptodate#"
[StyleUpdateCheckerDev]
Text="#Update#: #dev#"
[FontColorYes]
FontColor="255,0,0"
[FontColorNo]
FontColor="0,255,0"