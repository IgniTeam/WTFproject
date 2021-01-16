#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_EnemyBase__pf931210303.h"
#include "BP_Zombie__pf931210303.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/AI/BP_Zombie.BP_Zombie_C", OverrideNativeName="BP_Zombie_C"))
class ABP_Zombie_C__pf931210303 : public ABP_EnemyBase_C__pf931210303
{
public:
	GENERATED_BODY()
	ABP_Zombie_C__pf931210303(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Zombie__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Zombie__pf_1(int32 bpp__EntryPoint__pf);
	virtual void bpf__Attack__pf() override;
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
