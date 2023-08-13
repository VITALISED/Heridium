#pragma once
#include "pch.h"

enum eNGuiEditorText
{
    ENGuiEditorText_Text = 0,
    ENGuiEditorText_Button = 1,
    ENGuiEditorText_WindowTab = 2,
    ENGuiEditorText_WindowTabInactive = 3,
    ENGuiEditorText_TreeNode = 4,
    ENGuiEditorText_CheckBox = 5,
    ENGuiEditorText_TextInput = 6,
    ENGuiEditorText_TextInputLabel = 7,
    ENGuiEditorText_TextInputLabelHeader = 8,
    ENGuiEditorText_Category = 9,
    ENGuiEditorText_TaskBar = 10,
    ENGuiEditorText_GroupTitle = 11,
    ENGuiEditorText_TreeNodeSelected = 12,
    ENGuiEditorText_DynamicPanelTitle = 13,
};

class cTKNGuiEditorTextType
{
public:
    static const unsigned __int64 muNameHash = 0x4780AB6325CE84C6;
    static const unsigned __int64 muTemplateHash = 0xCE328FD208CBB692;
    static const int miNumMembers = 1;

    eNGuiEditorText meNGuiEditorText;

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
