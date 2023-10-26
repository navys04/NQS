#pragma once

#include "CoreMinimal.h"
#include "GraphEditor.h"
#include "Modules/ModuleManager.h"

class FNQSEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

protected:
    TSharedRef<SGraphEditor> CreateGraphEditorWidget(UEdGraph* InGraph);

    void OnSelectionChanged(const FGraphPanelSelectionSet& SelectionSet);
    void OnNodeDoubleClicked(UEdGraphNode* Node);
    void OnNodeTitleCommited(const FText& Text, ETextCommit::Type TextType, UEdGraphNode* Node);
};
