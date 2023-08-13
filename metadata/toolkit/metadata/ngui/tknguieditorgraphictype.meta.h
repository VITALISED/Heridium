#pragma once
#include "../../../../../../pch.h"

enum eNGuiEditorGraphic
{
    ENGuiEditorGraphic_Panel = 0,
    ENGuiEditorGraphic_Button = 1,
    ENGuiEditorGraphic_Text = 2,
    ENGuiEditorGraphic_Graphic = 3,
    ENGuiEditorGraphic_WindowTitleBar = 4,
    ENGuiEditorGraphic_WindowTitleBarInactive = 5,
    ENGuiEditorGraphic_WindowTab = 6,
    ENGuiEditorGraphic_WindowTabInactive = 7,
    ENGuiEditorGraphic_Window = 8,
    ENGuiEditorGraphic_WindowPane = 9,
    ENGuiEditorGraphic_WindowResize = 10,
    ENGuiEditorGraphic_WindowClose = 11,
    ENGuiEditorGraphic_WindowMinimize = 12,
    ENGuiEditorGraphic_WindowMaximize = 13,
    ENGuiEditorGraphic_ScrollBarBackground = 14,
    ENGuiEditorGraphic_ScrollBarForeground = 15,
    ENGuiEditorGraphic_TreeNodeCollapsed = 16,
    ENGuiEditorGraphic_TreeNodeExpanded = 17,
    ENGuiEditorGraphic_CheckBoxTrue = 18,
    ENGuiEditorGraphic_CheckBoxFalse = 19,
    ENGuiEditorGraphic_TextInput = 20,
    ENGuiEditorGraphic_Increment = 21,
    ENGuiEditorGraphic_Decrement = 22,
    ENGuiEditorGraphic_Cursor = 23,
    ENGuiEditorGraphic_TextSelection = 24,
    ENGuiEditorGraphic_Separator = 25,
    ENGuiEditorGraphic_EditorResize = 26,
    ENGuiEditorGraphic_EditorMove = 27,
    ENGuiEditorGraphic_EditorOverlay = 28,
    ENGuiEditorGraphic_FileBrowser = 29,
    ENGuiEditorGraphic_ColourEdit = 30,
    ENGuiEditorGraphic_IconButton = 31,
    ENGuiEditorGraphic_SliderKnob = 32,
    ENGuiEditorGraphic_SliderBar = 33,
    ENGuiEditorGraphic_IconButtonText = 34,
    ENGuiEditorGraphic_TextInputLabel = 35,
    ENGuiEditorGraphic_Category = 36,
    ENGuiEditorGraphic_Taskbar = 37,
    ENGuiEditorGraphic_TaskbarItem = 38,
    ENGuiEditorGraphic_StartBarWindow = 39,
    ENGuiEditorGraphic_ComboBox = 40,
    ENGuiEditorGraphic_ComboBoxWindow = 41,
    ENGuiEditorGraphic_IconListItem = 42,
    ENGuiEditorGraphic_IconListItemSelected = 43,
    ENGuiEditorGraphic_ImageButton = 44,
    ENGuiEditorGraphic_Toolbar = 45,
    ENGuiEditorGraphic_ToolbarGraphic = 46,
    ENGuiEditorGraphic_ToolbarOptions = 47,
    ENGuiEditorGraphic_Rectangle = 48,
    ENGuiEditorGraphic_TreeNodeBorder = 49,
    ENGuiEditorGraphic_Background = 50,
    ENGuiEditorGraphic_GroupTitle = 51,
    ENGuiEditorGraphic_TextLabelSeparator = 52,
    ENGuiEditorGraphic_AlignmentAnchor = 53,
    ENGuiEditorGraphic_MinimiseHighlight = 54,
    ENGuiEditorGraphic_Table = 55,
    ENGuiEditorGraphic_TableBorder = 56,
    ENGuiEditorGraphic_TableFolderButton = 57,
    ENGuiEditorGraphic_TableAddEntryButton = 58,
    ENGuiEditorGraphic_TreeNode = 59,
    ENGuiEditorGraphic_CategoryCollapsed = 60,
    ENGuiEditorGraphic_CategoryExpanded = 61,
    ENGuiEditorGraphic_WindowTitleBarDragTarget = 62,
    ENGuiEditorGraphic_IconButtonSelected = 63,
    ENGuiEditorGraphic_Line = 64,
    ENGuiEditorGraphic_TreeNodeBackground = 65,
    ENGuiEditorGraphic_TreeNodeCategoryBackground = 66,
    ENGuiEditorGraphic_SceneNodeBackground = 67,
    ENGuiEditorGraphic_PinChildren = 68,
    ENGuiEditorGraphic_UnpinChildren = 69,
    ENGuiEditorGraphic_DynamicPanel = 70,
    ENGuiEditorGraphic_DynamicPanelTitle = 71,
};

class cTkNGuiEditorGraphicType
{
    static const unsigned __int64 muNameHash = 0x2DD2249029019040;
    static const unsigned __int64 muTemplateHash = 0x60E007940935D5F2;
    static const int miNumMembers = 1;

    eNGuiEditorGraphic meNGuiEditorGraphic;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
