#include "NQSEditor.h"

#include "EditorStyleSet.h"

#define LOCTEXT_NAMESPACE "FNQSEditorModule"

void FNQSEditorModule::StartupModule()
{
    
}

void FNQSEditorModule::ShutdownModule()
{
    
}

TSharedRef<SGraphEditor> FNQSEditorModule::CreateGraphEditorWidget(UEdGraph* InGraph)
{
	check(InGraph);

	SGraphEditor::FGraphEditorEvents InEvents;
	InEvents.OnSelectionChanged = SGraphEditor::FOnSelectionChanged::CreateSP(this, &FNQSEditorModule::OnSelectionChanged);
	InEvents.OnNodeDoubleClicked = FSingleNodeEvent::CreateSP(this, &FNQSEditorModule::OnNodeDoubleClicked);
	InEvents.OnTextCommitted = FOnNodeTextCommitted::CreateSP(this, &FNQSEditorModule::OnNodeTitleCommited);

	TSharedRef<SWidget> TitleBarWidget =
		SNew(SBorder)
		.BorderImage(FAppStyle::GetBrush(TEXT("Graph.TitleBackground")))
		.HAlign(HAlign_Fill)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			.FillWidth(1.0f)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("QuestGraphLabel", "QuestGraph"))
				.TextStyle(FAppStyle::Get(), TEXT("GraphBreadcrumbButtonText"))
			]
		];

	const bool bGraphIsEditable = InGraph->bEditable;
	//return SNew(SGraphEditor)
	//	.IsEditable(this, &FGraphEdit)
}

void FNQSEditorModule::OnSelectionChanged(const FGraphPanelSelectionSet& SelectionSet)
{
}

void FNQSEditorModule::OnNodeDoubleClicked(UEdGraphNode* Node)
{
}

void FNQSEditorModule::OnNodeTitleCommited(const FText& Text, ETextCommit::Type TextType, UEdGraphNode* Node)
{
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FNQSEditorModule, NQSEditor)