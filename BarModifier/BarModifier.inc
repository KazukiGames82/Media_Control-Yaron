[Variables]
Media_Control-Yaron.LeftMouseDownAction=[!SetOption Media_Control-Yaron_String InlineSetting3 "Color | #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/(2-#*Media_Control-Yaron___Use_Text_Stand_Out*#))"][!UpdateMeterGroup Media_Control-Yaron][!DisableMouseAction Media_Control-Yaron "MouseOverAction"]

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
W=([#Media_Control-Yaron___Music_Width_[#Media_Control-Yaron___Width]]*#DroptopSize#)
ClipStringW=([#Media_Control-Yaron___Music_Width_[#Media_Control-Yaron___Width]]*#DroptopSize#)

[Media_Control-Yaron_Dynamic_Width_1]
W=

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Media_Control-Yaron_String]
Meter=String
MeterStyle=InfoStyle | Media_Control-Yaron_Style | Media_Control-Yaron_Dynamic_Width_#Media_Control-Yaron___Use_Dynamic_Width#
StringAlign=CenterCenter
InlineSetting3=Color | #TopBarFontColor1#,(#TopBarTitleOpacity#/(2-#Media_Control-Yaron___Use_Text_Stand_Out#))
Padding=((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1),#TopBarSysTextYPadding#,((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1),0
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#Media_Control-Yaron]]]+[Media_Control-Yaron_String:W]/2)
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1)+#Media_Control-Yaron___Use_Dynamic_Width#)
H=[#Media_Control-Yaron___Single_Line_H_[#Media_Control-Yaron___Use_Single_Line]]
Text="[#Media_Control-Yaron___Music_Info_[#WebState]]"
ClipString=2
ClipStringH=[#Media_Control-Yaron___Single_Line_ClipH_[#Media_Control-Yaron___Use_Single_Line]]

;----------------------------------------------------
; Main Meter
;----------------------------------------------------

[Media_Control-Yaron]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0
MouseOverAction=[!SetOption Media_Control-Yaron_Icon ImageTint "#*TopBarFontColor2*#,#*TopBarTitleOpacity*#"][!SetOption Media_Control-Yaron_String InlineSetting3 "Color | #*TopBarFontColor2*#,#*TopBarTitleOpacity*#"][!UpdateMeterGroup Media_Control-Yaron][!Redraw]
MouseLeaveAction=[!SetOption Media_Control-Yaron_Icon ImageTint "#*TopBarFontColor1*#,#*TopBarTitleOpacity*#"][!SetOption Media_Control-Yaron_String InlineSetting3 "Color | #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/(2-[#*Media_Control-Yaron___Use_Text_Stand_Out*]))"][!UpdateMeterGroup Media_Control-Yaron][!Redraw]
