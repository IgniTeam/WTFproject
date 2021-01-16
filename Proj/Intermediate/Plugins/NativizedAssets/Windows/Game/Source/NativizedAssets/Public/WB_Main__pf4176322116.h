#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UButton;
class UProgressBar;
class UTextBlock;
class UWB_HP_C__pf4176322116;
class UWB_Inventory_C__pf4176322116;
class ABP_Hero_C__pf3231479144;
class AGM_Main_C__pf3231479144;
#include "WB_Main__pf4176322116.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/UI/WB_Main.WB_Main_C", OverrideNativeName="WB_Main_C"))
class UWB_Main_C__pf4176322116 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="NewAnimation", Category="Animations", OverrideNativeName="NewAnimation"))
	UWidgetAnimation* bpv__NewAnimation__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_0", Category="WB_Main", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_119", Category="WB_Main", OverrideNativeName="ProgressBar_119"))
	UProgressBar* bpv__ProgressBar_119__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_90", Category="WB_Main", OverrideNativeName="TextBlock_90"))
	UTextBlock* bpv__TextBlock_90__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_104", Category="WB_Main", OverrideNativeName="TextBlock_104"))
	UTextBlock* bpv__TextBlock_104__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WB_HP", Category="WB_Main", OverrideNativeName="WB_HP"))
	UWB_HP_C__pf4176322116* bpv__WB_HP__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WB_Inventory", Category="WB_Main", OverrideNativeName="WB_Inventory"))
	UWB_Inventory_C__pf4176322116* bpv__WB_Inventory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="Default", MultiLine="true", OverrideNativeName="Character"))
	ABP_Hero_C__pf3231479144* bpv__Character__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="GM", Category="Default", MultiLine="true", OverrideNativeName="GM"))
	AGM_Main_C__pf3231479144* bpv__GM__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGM_Main"))
	AGM_Main_C__pf3231479144* b0l__K2Node_DynamicCast_AsGM_Main__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InText"))
	FText b0l__K2Node_CustomEvent_InText__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Hero"))
	ABP_Hero_C__pf3231479144* b0l__K2Node_DynamicCast_AsBP_Hero__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UWB_Main_C__pf4176322116(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WB_Main__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_Main__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_Main__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Buff"))
	virtual void bpf__Buff__pf(const FText& bpp__InText__pf__const);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPercent_0"))
	virtual float  bpf__GetPercent_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
