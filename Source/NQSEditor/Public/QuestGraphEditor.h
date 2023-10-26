// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestEditor.h"

/**
 * 
 */
class NQSEDITOR_API FQuestGraphEditor : public IQuestEditor
{
public:
	FQuestGraphEditor();
	virtual ~FQuestGraphEditor();

	virtual void OnSelectedNodesChangedImpl(const TSet<UObject*>& NewSelection) override;
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;

	void InitQuestEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost);

	//~ Begin IToolkit Interface
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual FText GetToolkitToolTipText() const override;
	//~ End IToolkit Interface

	//~ Begin FEditorUndoClientInterface
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override;
	//~ End of FEditorUndoClientInterface

	//~ Begin FBlueprintEditor Interface
	virtual void CreateDefaultCommands() override;
	virtual UBlueprint* GetBlueprintObj() const override;
	//~ End of FBlueprintEditor Interface

	/** Create widget for graph editing */
	TSharedRef<class SGraphEditor> CreateQuestGraphEditorWidget(UEdGraph* InGraph);
	
protected:
	//Not all of these are used yet
	void Quest_SelectAllNodes();
	bool Quest_CanSelectAllNodes() const;
	void Quest_DeleteSelectedNodes();
	bool Quest_CanDeleteNodes() const;
	void Quest_DeleteSelectedDuplicatableNodes();
	void Quest_CutSelectedNodes();
	bool Quest_CanCutNodes() const;
	void Quest_CopySelectedNodes();
	bool Quest_CanCopyNodes() const;
	void Quest_PasteNodes();
	void Quest_PasteNodesHere(const FVector2D& Location);
	bool Quest_CanPasteNodes() const;
	void Quest_DuplicateNodes();
	bool Quest_CanDuplicateNodes() const;
	void Quest_CreateComment();
	bool Quest_CanCreateComment() const;
};
