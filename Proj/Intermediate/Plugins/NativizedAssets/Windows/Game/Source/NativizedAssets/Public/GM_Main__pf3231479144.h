#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class AActor;
class UClass;
class UWB_Loading_C__pf4176322116;
class ABP_Hero_C__pf3231479144;
class APlayerStart;
class ABP_EnemyBase_C__pf931210303;
#include "GM_Main__pf3231479144.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Core/GM_Main.GM_Main_C", OverrideNativeName="GM_Main_C"))
class AGM_Main_C__pf3231479144 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Previous Level", Category="Default", MultiLine="true", OverrideNativeName="PreviousLevel"))
	FName bpv__PreviousLevel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Levels", Category="Default", MultiLine="true", OverrideNativeName="Levels"))
	TArray<FName> bpv__Levels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Boss Counter", Category="Default", MultiLine="true", OverrideNativeName="BossCounter"))
	int32 bpv__BossCounter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemies Count", Category="Default", MultiLine="true", OverrideNativeName="EnemiesCount"))
	int32 bpv__EnemiesCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Needed Items", Category="Default", MultiLine="true", OverrideNativeName="NeededItems"))
	TArray<UClass*> bpv__NeededItems__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Levels", Category="Default", MultiLine="true", OverrideNativeName="CurrentLevels"))
	TArray<FName> bpv__CurrentLevels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loading Widget", Category="Default", MultiLine="true", OverrideNativeName="LoadingWidget"))
	UWB_Loading_C__pf4176322116* bpv__LoadingWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="Default", MultiLine="true", OverrideNativeName="Character"))
	ABP_Hero_C__pf3231479144* bpv__Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Hero"))
	ABP_Hero_C__pf3231479144* b0l__K2Node_DynamicCast_AsBP_Hero__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_LevelToLoad"))
	FName b0l__K2Node_CustomEvent_LevelToLoad__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerStart* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AActor*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AActor* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	FName b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<ABP_EnemyBase_C__pf931210303*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	ABP_EnemyBase_C__pf931210303* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UWB_Loading_C__pf4176322116* b0l__CallFunc_Create_ReturnValue__pf;
	AGM_Main_C__pf3231479144(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GM_Main__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_GM_Main_1"))
	void bpf__ExecuteUbergraph_GM_Main__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GM_Main__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GM_Main__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GM_Main__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReloadLevels"))
	virtual void bpf__ReloadLevels__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddEnemy"))
	virtual void bpf__AddEnemy__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RemoveEnemy"))
	virtual void bpf__RemoveEnemy__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadLevel"))
	virtual void bpf__LoadLevel__pf(FName bpp__LevelToLoad__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
