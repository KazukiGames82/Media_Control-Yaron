[Rainmeter]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[Media_Control-Yaron___Measure_Check_State]
Measure=String
String=[MeasureStateWeb]
OnUpdateAction=[!SetVariable WebState [Media_Control-Yaron___Measure_Check_State] "Droptop\DropdownBar"][#Media_Control-Yaron___Update_Meters_TopBar_[#Media_Control-Yaron___Use_Dynamic_Width]][!SetOption Media_Control-Yaron___Measure_Check_State OnUpdateAction ""]
OnChangeAction=[!SetVariable WebState [Media_Control-Yaron___Measure_Check_State] "Droptop\DropdownBar"][#Media_Control-Yaron___Update_Meters_TopBar_[#Media_Control-Yaron___Use_Dynamic_Width]]
DynamicVariables=1
UpdateDivider=1

[Media_Control-Yaron___Measure_Check_String]
Measure=String
String=[MeasurePlayerWebTitle]#CRLF#[MeasureWebArtist]
OnUpdateAction=[!Delay 5000][#Media_Control-Yaron___Update_Meters_TopBar_[#Media_Control-Yaron___Use_Dynamic_Width]][!SetOption Media_Control-Yaron___Measure_Check_String OnUpdateAction ""]
OnChangeAction=[#Media_Control-Yaron___Update_Meters_TopBar_[#Media_Control-Yaron___Use_Dynamic_Width]]
DynamicVariables=1
UpdateDivider=1