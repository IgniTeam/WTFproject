#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AAIController;
class APawn;
#include "BTT_FindRandomPosition__pf931210303.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/AI/BTT_FindRandomPosition.BTT_FindRandomPosition_C", OverrideNativeName="BTT_FindRandomPosition_C"))
class UBTT_FindRandomPosition_C__pf931210303 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BB Target Location", Category="Default", MultiLine="true", OverrideNativeName="BB_TargetLocation"))
	FBlackboardKeySelector bpv__BB_TargetLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerController"))
	AAIController* b0l__K2Node_Event_OwnerController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ControlledPawn"))
	APawn* b0l__K2Node_Event_ControlledPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation"))
	FVector b0l__CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation__pf;
	UBTT_FindRandomPosition_C__pf931210303(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BTT_FindRandomPosition__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="AI", Comment="/** Alternative AI version of ReceiveExecute\t*\t@see ReceiveExecute for more details\t *\t@Note that if both generic and AI event versions are implemented only the more\t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="Alternative AI version of ReceiveExecute     @see ReceiveExecute for more details    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecuteAI"))
	virtual void bpf__ReceiveExecuteAI__pf(AAIController* bpp__OwnerController__pf, APawn* bpp__ControlledPawn__pf);
public:
};
