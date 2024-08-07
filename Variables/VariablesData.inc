[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

MyAppVersion=24.0715

Media_Control-Yaron___Update_Meters_TopBar=[!UpdateMeterGroup Media_Control-Yaron "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Media_Control-Yaron]Sys "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

Media_Control-Yaron___Update_Meters_TopBar_0=[!UpdateMeterGroup Media_Control-Yaron "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Media_Control-Yaron___Update_Meters_TopBar_1=[!UpdateMeterGroup Media_Control-Yaron "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Media_Control-Yaron]Sys "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

Media_Control-Yaron___Single_Line_Space_0=#CRLF#
Media_Control-Yaron___Single_Line_Space_1=" - "

Media_Control-Yaron___Single_Line_H_0=(#TopHeight#-(#TopBarCutout#*2)-2)
Media_Control-Yaron___Single_Line_H_1=(#TopHeight#/2)

Media_Control-Yaron___Single_Line_ClipH_0=(#TopHeight#-(#TopBarCutout#*2)-2)
Media_Control-Yaron___Single_Line_ClipH_1=(#TopHeight#/2)

Media_Control-Yaron___Music_Info_1=[#PlayerTitle[#*PlayerTypeNum*]][#Media_Control-Yaron___Single_Line_Space_[#*Media_Control-Yaron___Use_Single_Line*]][#PlayerArtist[#*PlayerTypeNum*]]
Media_Control-Yaron___Music_Info_2=[#PlayerTitle[#*PlayerTypeNum*]][#Media_Control-Yaron___Single_Line_Space_[#*Media_Control-Yaron___Use_Single_Line*]][#PlayerArtist[#*PlayerTypeNum*]]

Media_Control-Yaron___Music_Width_1=100
Media_Control-Yaron___Music_Width_2=200
Media_Control-Yaron___Music_Width_3=300
Media_Control-Yaron___Music_Width_4=400
Media_Control-Yaron___Music_Width_5=500
Media_Control-Yaron___Music_Width_6=600
Media_Control-Yaron___Music_Width_7=700
Media_Control-Yaron___Music_Width_8=800
Media_Control-Yaron___Music_Width_9=900
Media_Control-Yaron___Music_Width_10=1000
