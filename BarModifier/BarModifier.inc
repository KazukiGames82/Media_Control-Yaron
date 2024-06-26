[Variables]
Media_Control-Yaron.LeftMouseDownAction=[!SetOption Media_Control-Yaron_Icon ImageTint "#*TopBarFontColor1*#,#*TopBarTitleOpacity*#"][!SetOption Media_Control-Yaron_Icon ImageAlpha "((#*TopBarTitleOpacity*#/(2-#*Media_Control-Yaron___Use_Text_Stand_Out*#))*(#*Media_Control-Yaron___Show_Controls*#=0?(#*Media_Control-Yaron___Empty_Text*#=1?(#*WebState*#=0?1:0):0):1))"][!SetOption Media_Control-Yaron_String InlineSetting3 "Color | #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/(2-#*Media_Control-Yaron___Use_Text_Stand_Out*#))"][!UpdateMeterGroup Media_Control-Yaron][!DisableMouseAction Media_Control-Yaron "MouseOverAction"]

;---------------------------------------------------
; Styles
;----------------------------------------------------

[Media_Control-Yaron.Style]
ImageAlpha=0
W=[Media_Control-Yaron_String:W]

[Media_Control-Yaron_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Media_Control-Yaron]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
DynamicVariables=1
Container=SystemTrayContainer
Group=CustomApp[#Media_Control-Yaron]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Media_Control-Yaron]] | CustomAppButton | Media_Control-Yaron

[Media_Control-Yaron_Dynamic_Width_0]
W=(([#Media_Control-Yaron___Music_Width_[#Media_Control-Yaron___Width]]*#DroptopSize#)*(#WebState#=0?0:1))

[Media_Control-Yaron_Dynamic_Width_1]
W=

;----------------------------------------------------
; Measures
;----------------------------------------------------

[Media_Control-Yaron_Measure]
Measure=String
String=#Media_Control-Yaron___Music_Info_0#
IfMatch=MEDIACONTROLYARONNODATA
IfMatchAction=[!SetVariable Media_Control-Yaron___Empty_Text 1][#Media_Control-Yaron___Update_Meters_TopBar_[#Media_Control-Yaron___Use_Dynamic_Width]]
IfNotMatchAction=[!SetVariable Media_Control-Yaron___Empty_Text 0][#Media_Control-Yaron___Update_Meters_TopBar_[#Media_Control-Yaron___Use_Dynamic_Width]]
DynamicVariables=1
Substitute="":"MEDIACONTROLYARONNODATA"
Group=CustomApp[#Media_Control-Yaron]Sys | Media_Control-Yaron

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Media_Control-Yaron_Icon]
Meter=Image
MeterStyle=InfoStyle | Media_Control-Yaron_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Media_Control-Yaron\Button\Medium\#WebState#\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=((#TopBarTitleOpacity#/(2-#Media_Control-Yaron___Use_Text_Stand_Out#))*(#Media_Control-Yaron___Show_Controls#=0?(#Media_Control-Yaron___Empty_Text#=1?(#WebState#=0?1:0):0):1))
Padding=#SysIconPadding#
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Media_Control-Yaron]]]
Y=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*(#Media_Control-Yaron___Show_Controls#=0?(#Media_Control-Yaron___Empty_Text#=1?(#WebState#=0?1:0):0):1))
H=(#TopHeight#+#TopBarIconHOffset#)
LeftMouseDownAction=[!CommandMeasure "MeasurePosition[#PlayerMeasure[#PlayerNum]]" "[#PlayerPlayAction[#PlayerNum]]" "Droptop\Other\BackgroundProcesses"]

[Media_Control-Yaron_String]
Meter=String
MeterStyle=InfoStyle | Media_Control-Yaron_Style | Media_Control-Yaron_Dynamic_Width_#Media_Control-Yaron___Use_Dynamic_Width#
StringAlign=CenterCenter
InlineSetting3=Color | #TopBarFontColor1#,(#TopBarTitleOpacity#/(2-#Media_Control-Yaron___Use_Text_Stand_Out#))
Padding=(#Media_Control-Yaron___Show_Controls#=1?(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1):(#WebState#=0?(#Media_Control-Yaron___Empty_Text#=1?(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1):(#TopBarSysTextWPadding#*1.5)):(#TopBarSysTextWPadding#*1.5))),#TopBarSysTextYPadding#,(#Media_Control-Yaron___Show_Controls#=1?(#WebState#=0?(#Media_Control-Yaron___Empty_Text#=1?0:((((#TopHeight#+#TopBarIconHOffset#)*1.5)*0.30)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)*0.30)%1)):((((#TopHeight#+#TopBarIconHOffset#)*1.5)*0.30)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)*0.30)%1)):(#WebState#=0?(#Media_Control-Yaron___Empty_Text#=1?0:(#TopBarSysTextWPadding#*1.5)):(#TopBarSysTextWPadding#*1.5))),0
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#Media_Control-Yaron]]]+[Media_Control-Yaron_String:W]/2)
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
H=[#Media_Control-Yaron___Single_Line_H_[#Media_Control-Yaron___Use_Single_Line]]
Text="[#Media_Control-Yaron___Music_Info_[#WebState]]"
ClipString=2
ClipStringW=(([#Media_Control-Yaron___Music_Width_[#Media_Control-Yaron___Width]]*#DroptopSize#)*(#WebState#=0?0:1))
ClipStringH=[#Media_Control-Yaron___Single_Line_ClipH_[#Media_Control-Yaron___Use_Single_Line]]

;----------------------------------------------------
; Main Meter
;----------------------------------------------------

[Media_Control-Yaron]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0
MouseOverAction=[!SetOption Media_Control-Yaron_Icon ImageTint "#*TopBarFontColor2*#,#*TopBarTitleOpacity*#"][!SetOption Media_Control-Yaron_Icon ImageAlpha "#*TopBarTitleOpacity*#"][!SetOption Media_Control-Yaron_String InlineSetting3 "Color | #*TopBarFontColor2*#,#*TopBarTitleOpacity*#"][!UpdateMeterGroup Media_Control-Yaron][!Redraw]
MouseLeaveAction=[!SetOption Media_Control-Yaron_Icon ImageTint "#*TopBarFontColor1*#,#*TopBarTitleOpacity*#"][!SetOption Media_Control-Yaron_Icon ImageAlpha "((#*TopBarTitleOpacity*#/(2-#*Media_Control-Yaron___Use_Text_Stand_Out*#))*(#*Media_Control-Yaron___Show_Controls*#=0?(#*Media_Control-Yaron___Empty_Text*#=1?(#*WebState*#=0?1:0):0):1))"][!SetOption Media_Control-Yaron_String InlineSetting3 "Color | #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/(2-[#*Media_Control-Yaron___Use_Text_Stand_Out*]))"][!UpdateMeterGroup Media_Control-Yaron][!Redraw]
