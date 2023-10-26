// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGraphEditor.h"

FQuestGraphEditor::FQuestGraphEditor()
{
}

FQuestGraphEditor::~FQuestGraphEditor()
{
}

void FQuestGraphEditor::OnSelectedNodesChangedImpl(const TSet<UObject*>& NewSelection)
{
	IQuestEditor::OnSelectedNodesChangedImpl(NewSelection);
}

void FQuestGraphEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	IQuestEditor::RegisterTabSpawners(TabManager);
}

void FQuestGraphEditor::InitQuestEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
}

FName FQuestGraphEditor::GetToolkitFName() const
{
	return IQuestEditor::GetToolkitFName();
}

FText FQuestGraphEditor::GetBaseToolkitName() const
{
	return IQuestEditor::GetBaseToolkitName();
}

FString FQuestGraphEditor::GetWorldCentricTabPrefix() const
{
	return IQuestEditor::GetWorldCentricTabPrefix();
}

FLinearColor FQuestGraphEditor::GetWorldCentricTabColorScale() const
{
	return IQuestEditor::GetWorldCentricTabColorScale();
}

FText FQuestGraphEditor::GetToolkitToolTipText() const
{
	return IQuestEditor::GetToolkitToolTipText();
}

void FQuestGraphEditor::PostUndo(bool bSuccess)
{
	IQuestEditor::PostUndo(bSuccess);
}

void FQuestGraphEditor::PostRedo(bool bSuccess)
{
	IQuestEditor::PostRedo(bSuccess);
}

void FQuestGraphEditor::CreateDefaultCommands()
{
	IQuestEditor::CreateDefaultCommands();
}

UBlueprint* FQuestGraphEditor::GetBlueprintObj() const
{
	return IQuestEditor::GetBlueprintObj();
}

TSharedRef<SGraphEditor> FQuestGraphEditor::CreateQuestGraphEditorWidget(UEdGraph* InGraph)
{
}

void FQuestGraphEditor::Quest_SelectAllNodes()
{
}

bool FQuestGraphEditor::Quest_CanSelectAllNodes() const
{
}

void FQuestGraphEditor::Quest_DeleteSelectedNodes()
{
}

bool FQuestGraphEditor::Quest_CanDeleteNodes() const
{
}

void FQuestGraphEditor::Quest_DeleteSelectedDuplicatableNodes()
{
}

void FQuestGraphEditor::Quest_CutSelectedNodes()
{
}

bool FQuestGraphEditor::Quest_CanCutNodes() const
{
}

void FQuestGraphEditor::Quest_CopySelectedNodes()
{
}

bool FQuestGraphEditor::Quest_CanCopyNodes() const
{
}

void FQuestGraphEditor::Quest_PasteNodes()
{
}

void FQuestGraphEditor::Quest_PasteNodesHere(const FVector2D& Location)
{
}

bool FQuestGraphEditor::Quest_CanPasteNodes() const
{
}

void FQuestGraphEditor::Quest_DuplicateNodes()
{
}

bool FQuestGraphEditor::Quest_CanDuplicateNodes() const
{
}

void FQuestGraphEditor::Quest_CreateComment()
{
}

bool FQuestGraphEditor::Quest_CanCreateComment() const
{
}
