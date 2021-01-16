#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UUserWidget;
class UClass;
#include "WB_Options__pf4176322116.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/UI/WB_Options.WB_Options_C", OverrideNativeName="WB_Options_C"))
class UWB_Options_C__pf4176322116 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_209", Category="WB_Options", OverrideNativeName="Button_209"))
	UButton* bpv__Button_209__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="High", Category="WB_Options", OverrideNativeName="High"))
	UButton* bpv__High__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Low", Category="WB_Options", OverrideNativeName="Low"))
	UButton* bpv__Low__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Medium", Category="WB_Options", OverrideNativeName="Medium"))
	UButton* bpv__Medium__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Ultra", Category="WB_Options", OverrideNativeName="Ultra"))
	UButton* bpv__Ultra__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Previous Widget", Category="Default", MultiLine="true", OverrideNativeName="PreviousWidget"))
	UClass* bpv__PreviousWidget__pf;
	UWB_Options_C__pf4176322116(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WB_Options__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_Options__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_Options__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_Options__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_Options__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_209_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_209_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Ultra_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Ultra_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
