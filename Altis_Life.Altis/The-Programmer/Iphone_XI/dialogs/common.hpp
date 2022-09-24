#define CT_EDIT 2
#define FONT_NORMAL "PuristaLight"

#define ST_LEFT           0x00
#define ST_MULTI          0x10
#define GUI_GRID_CENTER_WAbs        ((safezoneW / safezoneH) min 1.2)
#define GUI_GRID_CENTER_HAbs        (GUI_GRID_CENTER_WAbs / 1.2)
#define GUI_GRID_CENTER_W        (GUI_GRID_CENTER_WAbs / 40)
#define GUI_GRID_CENTER_H        (GUI_GRID_CENTER_HAbs / 25)
#define GUI_GRID_CENTER_X        (safezoneX + (safezoneW - GUI_GRID_CENTER_WAbs)/2)
#define GUI_GRID_CENTER_Y        (safezoneY + (safezoneH - GUI_GRID_CENTER_HAbs)/2)

class Life_RscScrollBarIphoneXI
{
    color[] = {1,1,1,0.6};
    colorActive[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.3};
    thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
    arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
    arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
    border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
    shadow = 0;
    scrollSpeed = 0.06;
    width = 0;
    height = 0;
    autoScrollEnabled = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
};

class Life_RscControlsGroupIphoneXI {
    type = 15;
    idc = -1;
    x = 0;
    y = 0;
    w = 1;
    h = 1;
    shadow = 0;
    style = 16;

    class VScrollBar : Life_RscScrollBarIphoneXI
    {
        width = 0.021;
        autoScrollEnabled = 1;
    };

    class HScrollBar : Life_RscScrollBarIphoneXI
    {
        height = 0.028;
    };

    class Controls {};
};

class Life_RscControlsGroupNoScrollbarsIphoneXI : Life_RscControlsGroupIphoneXI {
    class VScrollbar : VScrollbar {
        width = 0;
    };

    class HScrollbar : HScrollbar {
        height = 0;
    };
};

class Life_RscButtonInvisibleIphoneXI : Life_RscButtonMenu {
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {1, 1, 1, 0};
    color[] = {1, 1, 1, 0};
    color2[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 0};
    colorDisabled[] = {1, 1, 1, 0};
};

class Life_RscEditIphoneXI
  {
    deletable = 0;
    fade = 0;
    access = 0;
    type    = CT_EDIT;
    style = "16 + 512 + 2";
    x = 0;
    y = 0;
    h = 0.04;
    w = 0.2;
    colorBackground[] = {0,0,0,0};
    colorText[] = {0.95,0.95,0.95,1};
    colorDisabled[] = {1,1,1,0.25};
    colorSelection[] = {1,1,1,0.25};
    autocomplete = "";
    text = "";
    size = 1;
    font = FONT_NORMAL;
    onKeyDown = "params [""_control"", ""_key"", ""_shift""];if (_key isEqualTo 28) then {true}else{false};";
    lineSpacing = 0;
    shadow = 2;
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    canModify = 1;
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
};

class Life_RscListBoxIphoneXI : Life_RscListBox {
    colorBackground[] = {0,0,0,0};
    colorText[] = {0,0,0,1};
    colorSelect[] = {0,0,0,1};
    colorSelect2[] = {0,0,0,1};
    colorSelectBackground[] = {0.65,0.65,0.65,0.5};
    colorSelectBackground2[] = {0.65,0.65,0.65,0.5};
    sizeex = 0.035;
};

class Life_RscComboIphoneXI : Life_RscCombo {
    colorBackground[] = {1,1,1,0.8};
    color[] = {0,0,0,1};
    colorText[] = {0,0,0,1};
    colorSelectBackground[] = {0.65,0.65,0.65,0.5};
};

class Life_RscTextIphoneXI : Life_RscText {
    shadow = 0;
};
