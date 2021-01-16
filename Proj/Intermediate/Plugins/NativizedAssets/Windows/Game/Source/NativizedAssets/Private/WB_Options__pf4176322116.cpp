#include "NativizedAssets.h"
#include "WB_Options__pf4176322116.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "WB_MainMenu__pf4176322116.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWB_Options_C__pf4176322116::UWB_Options_C__pf4176322116(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Button_209__pf = nullptr;
	bpv__High__pf = nullptr;
	bpv__Low__pf = nullptr;
	bpv__Medium__pf = nullptr;
	bpv__Ultra__pf = nullptr;
	bpv__PreviousWidget__pf = UWB_MainMenu_C__pf4176322116::StaticClass();
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWB_Options_C__pf4176322116::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Options_C__pf4176322116::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UWB_MainMenu_C__pf4176322116::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(5);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 5);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Button_209"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Button_209_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Ultra"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Ultra_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("High"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Medium"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Low"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__7 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(2);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_1"), (EObjectFlags)0x00280008);
	__Local__9->LayoutData.Offsets.Left = -500.000000f;
	__Local__9->LayoutData.Offsets.Top = -100.000000f;
	__Local__9->LayoutData.Offsets.Right = 1000.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__9->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__9->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_93"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(4);
	auto __Local__12 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__12->Padding.Left = 10.000000f;
	__Local__12->Padding.Top = 10.000000f;
	__Local__12->Padding.Right = 10.000000f;
	__Local__12->Padding.Bottom = 10.000000f;
	__Local__12->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UButton>(__Local__1, TEXT("Low"), (EObjectFlags)0x00280008);
	__Local__13->WidgetStyle.Normal.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__13->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__13->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__13->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__13->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__14 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__14 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__13->WidgetStyle.Hovered.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__13->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__13->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__13->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__13->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__15 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__15 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__13->WidgetStyle.Pressed.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__13->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__13->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__13->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__13->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__16 = (*(AccessPrivateProperty<UObject* >(&(__Local__13->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__16 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(1);
	auto __Local__18 = NewObject<UButtonSlot>(__Local__13, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__18->Parent = __Local__13;
	auto __Local__19 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_68"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1886DE4B4027E86BE39562A41400566A]\", \"EEFC3AC242686950E1D80FAF151E613F\", \"\u041d\u0418\u0417\u041a\")")	);
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__19->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__19->Font.Size = 30;
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__21->Padding.Left = 10.000000f;
	__Local__21->Padding.Top = 10.000000f;
	__Local__21->Padding.Right = 10.000000f;
	__Local__21->Padding.Bottom = 10.000000f;
	__Local__21->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__21->Parent = __Local__10;
	auto __Local__22 = NewObject<UButton>(__Local__1, TEXT("Medium"), (EObjectFlags)0x00280008);
	__Local__22->WidgetStyle.Normal.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__22->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__22->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__22->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__22->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Hovered.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__22->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__22->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__22->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__22->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__24 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__24 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->WidgetStyle.Pressed.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__22->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__22->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__22->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__22->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__25 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__25 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__26 = TArray<UPanelSlot*> ();
	__Local__26.Reserve(1);
	auto __Local__27 = NewObject<UButtonSlot>(__Local__22, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__27->Parent = __Local__22;
	auto __Local__28 = NewObject<UTextBlock>(__Local__1, TEXT("Mid"), (EObjectFlags)0x00280008);
	__Local__28->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1886DE4B4027E86BE39562A41400566A]\", \"61FE6E194C8720C4626E60B752C8F7F0\", \"\u0421\u0420\u0415\u0414\")")	);
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__28->Font.Size = 30;
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__26.Add(__Local__27);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__11.Add(__Local__21);
	auto __Local__30 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__30->Padding.Left = 10.000000f;
	__Local__30->Padding.Top = 10.000000f;
	__Local__30->Padding.Right = 10.000000f;
	__Local__30->Padding.Bottom = 10.000000f;
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->Parent = __Local__10;
	auto __Local__31 = NewObject<UButton>(__Local__1, TEXT("High"), (EObjectFlags)0x00280008);
	__Local__31->WidgetStyle.Normal.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__31->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__31->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__31->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__31->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Hovered.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__31->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__31->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__31->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__31->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->WidgetStyle.Pressed.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__31->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__31->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__31->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__31->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UButtonSlot>(__Local__31, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__36->Parent = __Local__31;
	auto __Local__37 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__37->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1886DE4B4027E86BE39562A41400566A]\", \"BC97BD044B33B1264E0638A975983566\", \"\u0412\u042b\u0421\u041e\u041a\")")	);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__37->Font.Size = 30;
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__11.Add(__Local__30);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__10, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__39->Padding.Left = 10.000000f;
	__Local__39->Padding.Top = 10.000000f;
	__Local__39->Padding.Right = 10.000000f;
	__Local__39->Padding.Bottom = 10.000000f;
	__Local__39->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__39->Parent = __Local__10;
	auto __Local__40 = NewObject<UButton>(__Local__1, TEXT("Ultra"), (EObjectFlags)0x00280008);
	__Local__40->WidgetStyle.Normal.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__40->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__40->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__40->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__40->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__40->WidgetStyle.Hovered.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__40->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__40->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__40->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__40->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__42 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__42 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__40->WidgetStyle.Pressed.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__40->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__40->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__40->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__40->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__40), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UButtonSlot>(__Local__40, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__45->Parent = __Local__40;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__46->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1886DE4B4027E86BE39562A41400566A]\", \"C347106B4C0E9628B84B9D83B872D0F9\", \"\u0423\u041b\u042c\u0422\u0420\u0410\")")	);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__46->Font.Size = 30;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__11.Add(__Local__39);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__7, TEXT("CanvasPanelSlot_2"), (EObjectFlags)0x00280008);
	__Local__48->LayoutData.Offsets.Left = -300.000000f;
	__Local__48->LayoutData.Offsets.Top = 50.000000f;
	__Local__48->LayoutData.Offsets.Right = 250.000000f;
	__Local__48->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__48->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__48->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__48->Parent = __Local__7;
	auto __Local__49 = NewObject<UButton>(__Local__1, TEXT("Button_209"), (EObjectFlags)0x00280008);
	__Local__49->WidgetStyle.Normal.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__49->WidgetStyle.Normal.Margin.Left = 0.000000f;
	__Local__49->WidgetStyle.Normal.Margin.Top = 0.000000f;
	__Local__49->WidgetStyle.Normal.Margin.Right = 0.000000f;
	__Local__49->WidgetStyle.Normal.Margin.Bottom = 0.000000f;
	auto& __Local__50 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__50 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__49->WidgetStyle.Hovered.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__49->WidgetStyle.Hovered.Margin.Left = 0.000000f;
	__Local__49->WidgetStyle.Hovered.Margin.Top = 0.000000f;
	__Local__49->WidgetStyle.Hovered.Margin.Right = 0.000000f;
	__Local__49->WidgetStyle.Hovered.Margin.Bottom = 0.000000f;
	auto& __Local__51 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__51 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__49->WidgetStyle.Pressed.ImageSize = FVector2D(1148.000000, 250.000000);
	__Local__49->WidgetStyle.Pressed.Margin.Left = 0.000000f;
	__Local__49->WidgetStyle.Pressed.Margin.Top = 0.000000f;
	__Local__49->WidgetStyle.Pressed.Margin.Right = 0.000000f;
	__Local__49->WidgetStyle.Pressed.Margin.Bottom = 0.000000f;
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__49->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__49), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(1);
	auto __Local__54 = NewObject<UButtonSlot>(__Local__49, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__54->Parent = __Local__49;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_136"), (EObjectFlags)0x00280008);
	__Local__55->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[1886DE4B4027E86BE39562A41400566A]\", \"A1DE088B41F7783D055E809F5AA034A2\", \"\u041d\u0410\u0417\u0410\u0414\")")	);
	auto& __Local__56 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__55->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__56 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__55->Font.Size = 30;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__8.Add(__Local__48);
	__Local__1->RootWidget = __Local__7;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWB_Options_C__pf4176322116::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__57;
	SlotNames.Append(__Local__57);
}
void UWB_Options_C__pf4176322116::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__58;
	TArray<FDelegateRuntimeBinding>  __Local__59;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWB_Options_C__pf4176322116::StaticClass())->MiscConvertedSubobjects[0]), __Local__58, __Local__59);
}
void UWB_Options_C__pf4176322116::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWB_Options_C__pf4176322116::bpf__ExecuteUbergraph_WB_Options__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 2")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 2")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 2")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 2")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 100")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 4")), ((APlayerController*)nullptr));
	return; // KCST_GotoReturn
}
void UWB_Options_C__pf4176322116::bpf__ExecuteUbergraph_WB_Options__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 1")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 1")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 1")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 1")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 100")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 2")), ((APlayerController*)nullptr));
	return; // KCST_GotoReturn
}
void UWB_Options_C__pf4176322116::bpf__ExecuteUbergraph_WB_Options__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 0")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 0")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 0")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 0")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 80")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 0")), ((APlayerController*)nullptr));
	return; // KCST_GotoReturn
}
void UWB_Options_C__pf4176322116::bpf__ExecuteUbergraph_WB_Options__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 3")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 3")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 3")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 3")), ((APlayerController*)nullptr));
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 100")), ((APlayerController*)nullptr));
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 6")), ((APlayerController*)nullptr));
	return; // KCST_GotoReturn
}
void UWB_Options_C__pf4176322116::bpf__ExecuteUbergraph_WB_Options__pf_4(int32 bpp__EntryPoint__pf)
{
	UUserWidget* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	RemoveFromParent();
	bpfv__CallFunc_Create_ReturnValue__pf = UWidgetBlueprintLibrary::Create(this, bpv__PreviousWidget__pf, ((APlayerController*)nullptr));
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	return; // KCST_GotoReturn
}
void UWB_Options_C__pf4176322116::bpf__BndEvt__Button_209_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WB_Options__pf_4(29);
}
void UWB_Options_C__pf4176322116::bpf__BndEvt__Ultra_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WB_Options__pf_3(23);
}
void UWB_Options_C__pf4176322116::bpf__BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WB_Options__pf_0(16);
}
void UWB_Options_C__pf4176322116::bpf__BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WB_Options__pf_1(9);
}
void UWB_Options_C__pf4176322116::bpf__BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_WB_Options__pf_2(2);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Options_C__pf4176322116::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonNormal.ButtonNormal 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonHovered.ButtonHovered 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonPressed.ButtonPressed 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Options_C__pf4176322116::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{86, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/Scene.Scene 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_MainMenu.WB_MainMenu_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UWB_Options_C__pf4176322116
{
	FRegisterHelper__UWB_Options_C__pf4176322116()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Proj/Core/UI/WB_Options"), &UWB_Options_C__pf4176322116::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWB_Options_C__pf4176322116 Instance;
};
FRegisterHelper__UWB_Options_C__pf4176322116 FRegisterHelper__UWB_Options_C__pf4176322116::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
