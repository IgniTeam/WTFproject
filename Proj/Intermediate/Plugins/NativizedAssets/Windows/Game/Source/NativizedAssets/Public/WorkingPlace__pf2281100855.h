#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMeshComponent;
class UStaticMesh;
class AActor;
class UClass;
#include "WorkingPlace__pf2281100855.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Proj/Placeables/WorkingPlace.WorkingPlace_C", OverrideNativeName="WorkingPlace_C"))
class AWorkingPlace_C__pf2281100855 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Spawn"))
	USceneComponent* bpv__Spawn__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mouse"))
	UStaticMeshComponent* bpv__Mouse__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="KeyBoard"))
	UStaticMeshComponent* bpv__KeyBoard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Comp"))
	UStaticMeshComponent* bpv__Comp__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Monitor"))
	UStaticMeshComponent* bpv__Monitor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Table"))
	UStaticMeshComponent* bpv__Table__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Chair"))
	UStaticMeshComponent* bpv__Chair__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Monitor Array", Category="Default", MultiLine="true", OverrideNativeName="MonitorArray"))
	TArray<UStaticMesh*> bpv__MonitorArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mouse Array", Category="Default", MultiLine="true", OverrideNativeName="MouseArray"))
	TArray<UStaticMesh*> bpv__MouseArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Keyboard Array", Category="Default", MultiLine="true", OverrideNativeName="KeyboardArray"))
	TArray<UStaticMesh*> bpv__KeyboardArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Comp Array", Category="Default", MultiLine="true", OverrideNativeName="CompArray"))
	TArray<UStaticMesh*> bpv__CompArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actor Array", Category="Default", MultiLine="true", OverrideNativeName="ActorArray"))
	TSet<UClass*> bpv__ActorArray__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UStaticMesh* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UStaticMesh* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	UStaticMesh* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	UStaticMesh* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_ToArray_Result"))
	TArray<UClass*> b0l__CallFunc_Set_ToArray_Result__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	UClass* b0l__CallFunc_Array_Get_Item_4__pf;
	AWorkingPlace_C__pf2281100855(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WorkingPlace__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WorkingPlace__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Generate"))
	virtual void bpf__Generate__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
