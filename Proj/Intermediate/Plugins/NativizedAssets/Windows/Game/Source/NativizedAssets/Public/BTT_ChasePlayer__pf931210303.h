#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AAIController;
class APawn;
class UAIAsyncTaskBlueprintProxy;
#include "BTT_ChasePlayer__pf931210303.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/AI/BTT_ChasePlayer.BTT_ChasePlayer_C", OverrideNativeName="BTT_ChasePlayer_C"))
class UBTT_ChasePlayer_C__pf931210303 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerController"))
	AAIController* b0l__K2Node_Event_OwnerController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ControlledPawn"))
	APawn* b0l__K2Node_Event_ControlledPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UBTT_ChasePlayer_C__pf931210303(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BTT_ChasePlayer__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BTT_ChasePlayer__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BTT_ChasePlayer__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="AI", Comment="/** Alternative AI version of ReceiveExecute\t*\t@see ReceiveExecute for more details\t *\t@Note that if both generic and AI event versions are implemented only the more\t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="Alternative AI version of ReceiveExecute     @see ReceiveExecute for more details    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecuteAI"))
	virtual void bpf__ReceiveExecuteAI__pf(AAIController* bpp__OwnerController__pf, APawn* bpp__ControlledPawn__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_BA134F444CD00A33F100509F5F035BE1"))
	virtual void bpf__OnSuccess_BA134F444CD00A33F100509F5F035BE1__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_BA134F444CD00A33F100509F5F035BE1"))
	virtual void bpf__OnFail_BA134F444CD00A33F100509F5F035BE1__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
public:
};
