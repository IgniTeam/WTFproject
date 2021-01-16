#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "WB_MainMenu__pf4176322116.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/UI/WB_MainMenu.WB_MainMenu_C", OverrideNativeName="WB_MainMenu_C"))
class UWB_MainMenu_C__pf4176322116 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="BeginButton", Category="WB_MainMenu", OverrideNativeName="BeginButton"))
	UButton* bpv__BeginButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="WB_MainMenu", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_174", Category="WB_MainMenu", OverrideNativeName="Button_174"))
	UButton* bpv__Button_174__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_95", Category="WB_MainMenu", OverrideNativeName="Image_95"))
	UImage* bpv__Image_95__pf;
	UWB_MainMenu_C__pf4176322116(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WB_MainMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_MainMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_MainMenu__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BeginButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__BeginButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
