#include "defines.h"
class RscXSliderH {
	style = 1024;
	type = 43;
	shadow = 2;
	x = 0;
	y = 0;
	h = 0.029412;
	w = 0.400000;
	color[] = {
			1, 1, 1, 0.7
	};
	colorActive[] = {
			1, 1, 1, 1
	};
	colorDisabled[] = {
			1, 1, 1, 0.500000
	};
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};
class RscTitle:RscText {
	style = 0;
	shadow = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {0.95, 0.95, 0.95, 1};
};
class RscShortcutButton {
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	color[] = {1,1,1,1.0};
	colorFocused[] = {1,1,1,1.0};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackground2[] = {1,1,1,1};
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	period = 0.4;
	font = "PuristaMedium";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	action = "";
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
};

class RscControlsGroup {
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;

	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		shadow = 0;
		scrollSpeed = 0.05;
	};

	class VScrollbar:ScrollBar {
		width = 0.021;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		shadow = 0;
		color[] = {1, 1, 1, 0.6};
	};

	class HScrollbar:ScrollBar {
		height = 0.028;
		shadow = 0;
		color[] = {1, 1, 1, 0.6};
	};

	//class ListScrollBar : ScrollBar {};

	class Controls {};
};

class RscControlsGroupNoScrollbars : RscControlsGroup {
	class VScrollbar : VScrollbar {
		width = 0;
	};

	class HScrollbar : HScrollbar {
		height = 0;
	};
};

class RscButtonMenu:RscShortcutButton {
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0.0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "(6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	textureNoShortcut = "";
};

class TAW_VDMenu {
	idd = MENU_IDD;
	name = "TAW_VDMenu";
	movingEnabled = 0;
	enableSimulation = 1;

	onLoad = "((_this select 0) displayCtrl 2999) ctrlSetFade 1; ((_this select 0) displayCtrl 2999) ctrlCommit 0;";

	class controlsBackground {
		class TitleBackground : RscText {
			colorBackground[] = { "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])" };
			idc = -1;
			x = .3;
			y = .2;
			w = .5;
			h = (1 / 25);
		};

		class MainBackground : RscText {
			colorBackground[] = { 0, 0, 0, .7 };
			idc = -1;
			x = .3;
			y = .2 + (11 / 250);
			w = .5;
			h = .57 - (22 / 250);
		};

		class Title : RscTitle {
			colorBackround[] = { 0, 0, 0, 0 };
			idc = -1;
			text = "View Settings (SCRIPT)";
			x = .3;
			y = .2;
			w = .8;
			h = (1 / 25);
		};

		class OnFootText : RscText {
			idc = -1;
			text = "Infantry:";
			x = .32;
			y = .258;
			w = .275;
			h = .04;
		};

		class inCarText : OnFootText {
			text = "Ground:";
			y = .305;
		};

		class inAirText : OnFootText {
			text = "Air:";
			y = .355;
		};

		class ObjectText : OnFootText {
			text = "Object:";
			y = .655;
		};

		class DroneText : OnFootText {
			text = "Drone:";
			y = .405;
		};

		class TerrainBackground : TitleBackground {
			text = "Grass Settings";
			shadow = 0;
			y = .46;
		};

		class ObjectBackground : TitleBackground {
			text = "Object Settings";
			y = .55;
		};

		class ButtonClose : RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			x = 0.3;
			y = 0.77 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class SaveManagerBtn:ButtonClose {
			text = "Saves";
			onButtonClick = "[] call tawvd_fnc_openSaveManager;";
			x = .465;
		};
	};

	class controls {

		//Sliders
		class VD_onFoot_slider : RscXSliderH {
			idc = INFANTRY_SLIDER;
			text = "";
			onSliderPosChanged = "[0, _this select 1] call TAWVD_fnc_onSliderChanged;";
			toolTip = "View Distance while on foot";
			x = .42;
			y = .30 - (1 / 25);
			w = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};

		class VD_inCar_slider : VD_onFoot_slider {
			idc = GROUND_SLIDER;
			toolTip = "View distance while in a ground vehicle";
			onSliderPosChanged = "[1, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y = .35 - (1 / 25);
		};

		class VD_inAir_slider : VD_onFoot_slider {
			idc = AIR_SLIDER;
			toolTip = "View distance while in an aircraft";
			onSliderPosChanged = "[2, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y = .40 - (1 / 25);
		};

		class VD_Object_slider : VD_onFoot_slider {
			idc = OBJECT_SLIDER;
			toolTip = "Object rendering distance";
			onSliderPosChanged = "[3, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y = .7 - (1 / 25);
		};

		class VD_Drone_slider:VD_onFoot_slider {
			idc = DRONE_SLIDER;
			toolTip = "View distance while operating a UAV/UGV";
			onSliderPosChanged = "[4, _this select 1] call TAWVD_fnc_onSliderChanged;";
			y = .45 - (1 / 25);
		}

		//Values (RscEdit Butons)
		class VD_onFoot_Edit : RscEdit {
			idc = INFANTRY_EDIT;
			text = "";
			onKeyUp = "[_this select 0, _this select 1, 'ground',true] call TAWVD_fnc_onChar;";

			x = .7;
			y = .258;
			w = .08;
			h = .04;
		};

		class VD_inCar_Edit : VD_onFoot_Edit {
			idc = GROUND_EDIT;
			onKeyUp = "[_this select 0, _this select 1, 'vehicle',true] call TAWVD_fnc_onChar;";
			y = .31;
		};

		class VD_inAir_Edit : VD_onFoot_Edit {
			idc = AIR_EDIT;
			onKeyUp = "[_this select 0, _this select 1, 'air',true] call TAWVD_fnc_onChar;";
			y = .36;
		};

		class VD_inDrone_Edit:VD_onFoot_Edit {
			idc = DRONE_EDIT;
			onKeyUp = "[_this select 0, _this select 1, 'drone',true] call TAWVD_fnc_onChar;";
			y = .41;
		};

		class VD_Object_Edit : VD_onFoot_Edit {
			idc = OBJECT_EDIT;
			onKeyUp = "[_this select 0, _this select 1, 'object',true] call TAWVD_fnc_onChar;";
			y = .656;
		};

		//Grass Settings
		class VD_terrain_none {
			idc = TERRAIN_NONE;
			type = 11;
			style = 0;
			font = "PuristaLight";
			color[] = { 1, 1, 1, 1 };
			colorActive[] = { 1, 0.2, 0.2, 1 };
			colorDisabled[] = {0, 0, 0, 1};
			soundEnter[] = { "\A3\ui_f\data\sound\onover", 0.09, 1 };
			soundPush[] = { "\A3\ui_f\data\sound\new1", 0.0, 0 };
			soundClick[] = { "\A3\ui_f\data\sound\onclick", 0.07, 1 };
			soundEscape[] = { "\A3\ui_f\data\sound\onescape", 0.09, 1 };
			text = "None";
			action = "['none'] call TAWVD_fnc_onTerrainChanged;";
			sizeEx = 0.04;

			x = .38; y = .505;
			w = .275; h = .04;
		};

		class VD_terrain_low : VD_terrain_none {
			idc = -1;
			text = "Low";
			action = "['low'] call TAWVD_fnc_onTerrainChanged;";
			x = .47;
		};

		class VD_terrain_normal : VD_terrain_none {
			idc = -1;
			text = "Normal";
			action = "['norm'] call TAWVD_fnc_onTerrainChanged;";
			x = .56;
		};

		class VD_terrain_high : VD_terrain_none {
			idc = -1;
			text = "High";
			action = "['high'] call TAWVD_fnc_onTerrainChanged;";
			x = .67;
		};

		class ObjectSyncCheckbox : RscCheckbox
		{
			idc = 2931;
			x = .32; y = .6;
			tooltip = "Sync object rendering with view rendering";
			onCheckedChanged = "if((_this select 1) == 1) then {tawvd_syncObject = true;ctrlEnable [2941,false]; ctrlEnable [2942,false];} else {tawvd_syncObject = false; ctrlEnable [2942,true]; ctrlEnable [2941,true];};";
			w = 1 * GUI_GRID_CENTER_W;
			h = 1 * GUI_GRID_CENTER_H;
		};

		class ObjectSynctext : RscText {
			idc = -1;
			text = "Sync with view";
			x = .345; y = .596;
			w = .35; h = .04;
		};

		class Manager:RscControlsGroup {
			idc = MANAGER_GROUP;

			x = -0.21; y = .2;
			w = .5; h = 3;
			class Controls {
				class SaveLoadGroup:RscControlsGroupNoScrollbars {
					idc = SAVELOAD_GROUP;

					x = 0;
					y = 0;
					w = .5;
					h = 3;

					class Controls {
						class MyTitleBackground:RscText {
							colorBackground[] = { "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])" };
							idc = -1;
							x = 0;
							y = 0;
							w = .5;
							h = (1 / 25);
						};

						class Title : RscTitle {
							colorBackround[] = { 0, 0, 0, 0 };
							idc = -1;
							text = "Save Manager";
							x = 0;
							y = 0;
							w = .8;
							h = (1 / 25);
						};

						class MainBackground:RscText {
							colorBackground[] = { 0, 0, 0, .7 };
							idc = -1;
							x = 0;
							y = 0 + (11 / 250);
							w = .5;
							h = .57 - (22 / 250);
						};

						class SaveList:RscListBox {
							idc = SAVES_LIST;
							sizeEx = 0.04;
							colorBackground[] = {0.1,0.1,0.1,0.9};
							x = 0; y = 0 + (11 / 250);
							w = .5; h = .49 - (22 / 250);

							onLBSelChanged = "_this call TAWVD_fnc_onSaveSelectionChanged;";
						};

						class SaveSlotName:VD_onFoot_Edit {
							idc = SLOT_NAME;
							text = "SAVE NAME";
							colorBackground[] = {0,0,0,0.6};
							onKeyUp = "";

							x = .025; y = .42 + (11 / 250);
							w = .45;
						};

						class SaveButton:RscButtonMenu {
							text = "Save";
							onButtonClick = "[] call TAWVD_fnc_onSavePressed;";
							x = 0;
							y = 0.57 - (1 / 25);
							w = (6.25 / 40);
							h = (1 / 25);
						};

						class HideButton:RscButtonMenu {
							text = "Hide";
							onButtonClick = "((findDisplay 2900) displayCtrl 2999) ctrlSetFade 1; ((findDisplay 2900) displayCtrl 2999) ctrlCommit 0.3;";
							x = .16;
							y = 0.57 - (1 / 25);
							w = (6.25 / 40);
							h = (1 / 25);
						};
					};
				};
			};
		};
	};
};