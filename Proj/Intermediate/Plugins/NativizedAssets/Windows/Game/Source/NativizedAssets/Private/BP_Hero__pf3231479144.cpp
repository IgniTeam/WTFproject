#include "NativizedAssets.h"
#include "BP_Hero__pf3231479144.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
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
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
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
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Hearing.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "WB_Loading__pf4176322116.h"
#include "WB_InGameMenu__pf4176322116.h"
#include "BP_EnemyBase__pf931210303.h"
#include "WB_Main__pf4176322116.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Public/Slate/SGameLayerManager.h"
#include "Runtime/SlateCore/Public/Rendering/RenderingCommon.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "WB_Inventory__pf4176322116.h"
#include "AB_Hero__pf104867521.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Hero_C__pf3231479144::ABP_Hero_C__pf3231479144(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		static TWeakFieldPtr<FProperty> __Local__4{};
		const FProperty* __Local__3 = __Local__4.Get();
		if (nullptr == __Local__3)
		{
			__Local__3 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bVisible")));
			check(__Local__3);
			__Local__4 = __Local__3;
		}
		(((FBoolProperty*)__Local__3)->SetPropertyValue_InContainer((__Local__0), false, 0));
		__Local__0->bHiddenInGame = false;
		static TWeakFieldPtr<FProperty> __Local__6{};
		const FProperty* __Local__5 = __Local__6.Get();
		if (nullptr == __Local__5)
		{
			__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__5);
			__Local__6 = __Local__5;
		}
		(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		static TWeakFieldPtr<FProperty> __Local__8{};
		const FProperty* __Local__7 = __Local__8.Get();
		if (nullptr == __Local__7)
		{
			__Local__7 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__7);
			__Local__8 = __Local__7;
		}
		(((FBoolProperty*)__Local__7)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__10{};
		const FProperty* __Local__9 = __Local__10.Get();
		if (nullptr == __Local__9)
		{
			__Local__9 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__9);
			__Local__10 = __Local__9;
		}
		(((FBoolProperty*)__Local__9)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->AnimClass = UAB_Hero_C__pf104867521::StaticClass();
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Hero_C__pf3231479144::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		auto& __Local__11 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__11 = __Local__0;
		auto& __Local__12 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeLocation() )));
		__Local__12 = FVector(0.000000, 0.000000, -85.000000);
		auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((__Local__2), USceneComponent::__PPO__RelativeRotation() )));
		__Local__13 = FRotator(0.000000, -90.000183, 0.000000);
		auto& __Local__14 = (*(AccessPrivateProperty<FVector >((__Local__2), USceneComponent::__PPO__RelativeScale3D() )));
		__Local__14 = FVector(0.437500, 0.437500, 0.437500);
		static TWeakFieldPtr<FProperty> __Local__16{};
		const FProperty* __Local__15 = __Local__16.Get();
		if (nullptr == __Local__15)
		{
			__Local__15 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__15);
			__Local__16 = __Local__15;
		}
		(((FBoolProperty*)__Local__15)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__SpringArm1__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm1"));
	bpv__Camera1__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera1"));
	bpv__AIPerceptionStimuliSource__pf = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSource"));
	bpv__SkeletalMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	bpv__Linetrace1__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Linetrace1"));
	bpv__Linetrace2__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Linetrace2"));
	bpv__SpringArm1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm1__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm1__pf->TargetArmLength = 800.000000f;
	bpv__SpringArm1__pf->bDoCollisionTest = false;
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__SpringArm1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(-60.000000, 0.000000, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__19{};
	const FProperty* __Local__18 = __Local__19.Get();
	if (nullptr == __Local__18)
	{
		__Local__18 = (USceneComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAbsoluteRotation")));
		check(__Local__18);
		__Local__19 = __Local__18;
	}
	(((FBoolProperty*)__Local__18)->SetPropertyValue_InContainer((bpv__SpringArm1__pf), true, 0));
	static TWeakFieldPtr<FProperty> __Local__21{};
	const FProperty* __Local__20 = __Local__21.Get();
	if (nullptr == __Local__20)
	{
		__Local__20 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__20);
		__Local__21 = __Local__20;
	}
	(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((bpv__SpringArm1__pf), false, 0));
	bpv__Camera1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera1__pf->AttachToComponent(bpv__SpringArm1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((bpv__Camera1__pf), false, 0));
	bpv__AIPerceptionStimuliSource__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakFieldPtr<FProperty> __Local__23{};
	const FProperty* __Local__22 = __Local__23.Get();
	if (nullptr == __Local__22)
	{
		__Local__22 = (UAIPerceptionStimuliSourceComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAutoRegisterAsSource")));
		check(__Local__22);
		__Local__23 = __Local__22;
	}
	(((FBoolProperty*)__Local__22)->SetPropertyValue_InContainer((bpv__AIPerceptionStimuliSource__pf), true, 0));
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<TSubclassOf<UAISense> > >((bpv__AIPerceptionStimuliSource__pf), UAIPerceptionStimuliSourceComponent::__PPO__RegisterAsSourceForSenses() )));
	__Local__24 = TArray<TSubclassOf<UAISense> > ();
	__Local__24.Reserve(1);
	__Local__24.Add(UAISense_Hearing::StaticClass());
	(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((bpv__AIPerceptionStimuliSource__pf), false, 0));
	bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkeletalMesh__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform , TEXT("RightHand"));
	bpv__SkeletalMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__SkeletalMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Hero_C__pf3231479144::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	auto& __Local__25 = (*(AccessPrivateProperty<FVector >((bpv__SkeletalMesh__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__25 = FVector(-70.803452, -66.668533, -18.117434);
	auto& __Local__26 = (*(AccessPrivateProperty<FRotator >((bpv__SkeletalMesh__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__26 = FRotator(0.000000, 59.999962, -89.999931);
	auto& __Local__27 = (*(AccessPrivateProperty<FVector >((bpv__SkeletalMesh__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__27 = FVector(0.200000, 0.200000, 0.200000);
	(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((bpv__SkeletalMesh__pf), false, 0));
	bpv__Linetrace1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Linetrace1__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Linetrace1__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(-29.715401, 94.367180, 194.285706);
	auto& __Local__29 = (*(AccessPrivateProperty<FRotator >((bpv__Linetrace1__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__29 = FRotator(0.000000, 90.000183, 0.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FVector >((bpv__Linetrace1__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__30 = FVector(2.285714, 2.285714, 2.285714);
	(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((bpv__Linetrace1__pf), false, 0));
	bpv__Linetrace2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Linetrace2__pf->AttachToComponent(__Local__2, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__31 = (*(AccessPrivateProperty<FVector >((bpv__Linetrace2__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__31 = FVector(34.285370, 105.142807, 194.285706);
	auto& __Local__32 = (*(AccessPrivateProperty<FRotator >((bpv__Linetrace2__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__32 = FRotator(0.000000, 90.000183, 0.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<FVector >((bpv__Linetrace2__pf), USceneComponent::__PPO__RelativeScale3D() )));
	__Local__33 = FVector(2.285714, 2.285714, 2.285714);
	(((FBoolProperty*)__Local__20)->SetPropertyValue_InContainer((bpv__Linetrace2__pf), false, 0));
	bpv__HP__pf = 100.000000f;
	bpv__SDoc__pf = TArray<FSDocs__pf1693275370> ();
	bpv__WBMain__pf = nullptr;
	bpv__InGameMenu__pf = nullptr;
	bpv__RunSpeed__pf = 1000.000000f;
	bpv__WalkSpeed__pf = 600.000000f;
	bpv__SuperShot__pf = 0.000000f;
	bpv__AutomaticFire__pf = false;
	bpv__MovementSpeed__pf = 0.000000f;
	auto& __Local__34 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__34 = __Local__2;
	auto& __Local__35 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__35 = __Local__1;
	auto& __Local__36 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__36 = __Local__0;
	bUseControllerRotationYaw = false;
	auto& __Local__37 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__37 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Hero_C__pf3231479144::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpringArm1__pf)
	{
		bpv__SpringArm1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera1__pf)
	{
		bpv__Camera1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AIPerceptionStimuliSource__pf)
	{
		bpv__AIPerceptionStimuliSource__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkeletalMesh__pf)
	{
		bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Linetrace1__pf)
	{
		bpv__Linetrace1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Linetrace2__pf)
	{
		bpv__Linetrace2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Hero_C__pf3231479144::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Proj/Core/EBaffs.EBaffs")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UWB_Loading_C__pf4176322116::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWB_InGameMenu_C__pf4176322116::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_EnemyBase_C__pf931210303::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWB_Main_C__pf4176322116::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UWB_Inventory_C__pf4176322116::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAB_Hero_C__pf104867521::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FSDocs__pf1693275370();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FSDocs__pf1693275370());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__38 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__38);
	auto __Local__39 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__39);
	auto __Local__40 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__40);
	static TWeakFieldPtr<FProperty> __Local__42{};
	const FProperty* __Local__41 = __Local__42.Get();
	if (nullptr == __Local__41)
	{
		__Local__41 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__41);
		__Local__42 = __Local__41;
	}
	(((FBoolProperty*)__Local__41)->SetPropertyValue_InContainer((__Local__38), false, 0));
	__Local__39->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__39->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__39->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__43 = __Local__39->InputAxisDelegateBindings[0];
	__Local__43.InputAxisName = FName(TEXT("TurnForward"));
	__Local__43.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnForward_K2Node_InputAxisEvent_3"));
	auto& __Local__44 = __Local__39->InputAxisDelegateBindings[1];
	__Local__44.InputAxisName = FName(TEXT("TurnForward"));
	__Local__44.bOverrideParentBinding = false;
	auto& __Local__45 = __Local__39->InputAxisDelegateBindings[2];
	__Local__45.InputAxisName = FName(TEXT("Turn"));
	__Local__45.bOverrideParentBinding = false;
	auto& __Local__46 = __Local__39->InputAxisDelegateBindings[3];
	__Local__46.InputAxisName = FName(TEXT("MoveForward"));
	__Local__46.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0"));
	auto& __Local__47 = __Local__39->InputAxisDelegateBindings[4];
	__Local__47.InputAxisName = FName(TEXT("MoveRight"));
	__Local__47.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"));
	auto& __Local__48 = __Local__39->InputAxisDelegateBindings[5];
	__Local__48.InputAxisName = FName(TEXT("Turn"));
	__Local__48.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_2"));
	__Local__40->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__40->InputKeyDelegateBindings.AddUninitialized(4);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__40->InputKeyDelegateBindings.GetData(), 4);
	auto& __Local__49 = __Local__40->InputKeyDelegateBindings[0];
	__Local__49.InputChord.Key = FKey(TEXT("MouseScrollDown"));
	__Local__49.FunctionNameToBind = FName(TEXT("InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3"));
	auto& __Local__50 = __Local__40->InputKeyDelegateBindings[1];
	__Local__50.InputChord.Key = FKey(TEXT("MouseScrollUp"));
	__Local__50.FunctionNameToBind = FName(TEXT("InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2"));
	auto& __Local__51 = __Local__40->InputKeyDelegateBindings[2];
	__Local__51.InputChord.Key = FKey(TEXT("P"));
	__Local__51.FunctionNameToBind = FName(TEXT("InpActEvt_P_K2Node_InputKeyEvent_1"));
	auto& __Local__52 = __Local__40->InputKeyDelegateBindings[3];
	__Local__52.InputChord.Key = FKey(TEXT("E"));
	__Local__52.FunctionNameToBind = FName(TEXT("InpActEvt_E_K2Node_InputKeyEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_4__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ActorHasTag_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_2__pf{};
	bool bpfv__CallFunc_ActorHasTag_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 83:
			{
				__StateStack.Push(88);
			}
		case 84:
			{
				if(::IsValid(bpv__Linetrace1__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_4__pf = bpv__Linetrace1__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_4__pf, 1500.000000);
				if(::IsValid(bpv__Linetrace1__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__Linetrace1__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_4__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_2__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_3__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::ForOneFrame, /*out*/ b0l__CallFunc_LineTraceSingle_OutHit_2__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 85:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 86:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_2__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_2__pf);
				if(::IsValid(b0l__CallFunc_BreakHitResult_HitActor_2__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue_1__pf = b0l__CallFunc_BreakHitResult_HitActor_2__pf->AActor::ActorHasTag(FName(TEXT("Enemy")));
				}
				if (!bpfv__CallFunc_ActorHasTag_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 87:
			{
				bpf__Fire__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 88:
			{
				if(::IsValid(bpv__Linetrace2__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_3__pf = bpv__Linetrace2__pf->USceneComponent::GetForwardVector();
				}
				if(::IsValid(bpv__Linetrace2__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = bpv__Linetrace2__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_3__pf, 1500.000000);
				bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_3__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_2__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable_1__pf, EDrawDebugTrace::ForOneFrame, /*out*/ b0l__CallFunc_LineTraceSingle_OutHit_1__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 89:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 90:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_1__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_1__pf);
				if(::IsValid(b0l__CallFunc_BreakHitResult_HitActor_1__pf))
				{
					bpfv__CallFunc_ActorHasTag_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitActor_1__pf->AActor::ActorHasTag(FName(TEXT("Enemy")));
				}
				if (!bpfv__CallFunc_ActorHasTag_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 87;
				break;
			}
		case 91:
			{
				__CurrentState = 83;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_1(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	float bpfv__CallFunc_ApplyDamage_ReturnValue__pf{};
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetSocketLocation_ReturnValue__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue_1__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue_3__pf{};
	float bpfv__CallFunc_ApplyDamage_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 12:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				__StateStack.Push(48);
			}
		case 40:
			{
				if(::IsValid(bpv__Linetrace1__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf = bpv__Linetrace1__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_1__pf, 1500.000000);
				if(::IsValid(bpv__Linetrace1__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Linetrace1__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_1__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue_3__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable_3__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingle_OutHit_3__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 41:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue_3__pf)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 42:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_3__pf);
				b0l__K2Node_DynamicCast_AsBP_Enemy_Base_1__pf = Cast<ABP_EnemyBase_C__pf931210303>(b0l__CallFunc_BreakHitResult_HitActor_3__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBP_Enemy_Base_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 43:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart_3__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd_3__pf);
				bpfv__CallFunc_ApplyDamage_ReturnValue_1__pf = UGameplayStatics::ApplyDamage(b0l__CallFunc_BreakHitResult_HitActor_3__pf, 10.000000, ((AController*)nullptr), this, ((UClass*)nullptr));
			}
		case 44:
			{
				if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf = (*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue_2__pf, -1000.000000);
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->AddImpulse(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue_2__pf, true);
				}
			}
		case 45:
			{
				if(::IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SkeletalMesh__pf->GetSocketLocation(FName(TEXT("Muzzle")));
				}
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue_1__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ABP_Hero_C__pf3231479144::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(0.200000,0.200000,0.200000), true, EPSCPoolMethod::None, true);
			}
		case 46:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Hero_C__pf3231479144::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, ((USoundConcurrency*)nullptr), ((AActor*)nullptr), true);
			}
		case 47:
			{
				UKismetSystemLibrary::RetriggerableDelay(this, 0.500000, FLatentActionInfo(10, 1786410699, TEXT("ExecuteUbergraph_BP_Hero_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				if(::IsValid(bpv__Linetrace2__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__Linetrace2__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 1500.000000);
				if(::IsValid(bpv__Linetrace2__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__Linetrace2__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable_2__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 49:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue__pf)
				{
					__CurrentState = 52;
					break;
				}
			}
		case 50:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				b0l__K2Node_DynamicCast_AsBP_Enemy_Base__pf = Cast<ABP_EnemyBase_C__pf931210303>(b0l__CallFunc_BreakHitResult_HitActor__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Enemy_Base__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 51:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_ApplyDamage_ReturnValue__pf = UGameplayStatics::ApplyDamage(b0l__CallFunc_BreakHitResult_HitActor__pf, 10.000000, ((AController*)nullptr), this, ((UClass*)nullptr));
			}
		case 52:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ABP_Hero_C__pf3231479144::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), b0l__CallFunc_BreakHitResult_Location__pf, FRotator(0.000000,0.000000,0.000000), FVector(0.500000,0.500000,0.500000), true, EPSCPoolMethod::None, true);
				__CurrentState = 44;
				break;
			}
		case 55:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 56:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 57:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 58:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 55;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 69:
			{
				__StateStack.Push(70);
				__CurrentState = 58;
				break;
			}
		case 70:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 71;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 71:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = 39;
				break;
			}
		case 72:
			{
				__CurrentState = 69;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_2(int32 bpp__EntryPoint__pf)
{
	UWB_Main_C__pf4176322116* bpfv__CallFunc_Create_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue_2__pf = CastChecked<UWB_Main_C__pf4176322116>(UWidgetBlueprintLibrary::Create(this, UWB_Main_C__pf4176322116::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue_2__pf))
	{
		bpfv__CallFunc_Create_ReturnValue_2__pf->UUserWidget::AddToViewport(0);
	}
	bpv__WBMain__pf = bpfv__CallFunc_Create_ReturnValue_2__pf;
	bpf__StartCheckFire__pf();
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 73:
			{
				__CurrentState = 74;
				break;
			}
		case 74:
			{
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue_3__pf, 0.000000);
				if (!bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 75:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("Turn")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf = AActor::GetInputAxisValue(FName(TEXT("TurnForward")));
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue_1__pf, -1.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				if(::IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					(*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 80:
			{
				__CurrentState = 81;
				break;
			}
		case 81:
			{
				bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, 0.000000);
				if (!bpfv__CallFunc_NotEqual_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 75;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_4(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 82);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("CheckFire")));
	bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate__pf, 0.100000, true, 0.000000, 0.000000);
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 78);
	// optimized KCST_UnconditionalGoto
	AddMovementInput(FVector(1.000000,0.000000,0.000000), b0l__K2Node_InputAxisEvent_AxisValue_1__pf, false);
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 76);
	// optimized KCST_UnconditionalGoto
	AddMovementInput(FVector(0.000000,1.000000,0.000000), b0l__K2Node_InputAxisEvent_AxisValue_2__pf, false);
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_7(int32 bpp__EntryPoint__pf)
{
	UWB_Loading_C__pf4176322116* bpfv__CallFunc_Create_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UWB_Loading_C__pf4176322116>(UWidgetBlueprintLibrary::Create(this, UWB_Loading_C__pf4176322116::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
	}
	UGameplayStatics::OpenLevel(this, FName(TEXT("Transit")), true, FString(TEXT("")));
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_8(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__HP__pf, b0l__K2Node_Event_Damage__pf);
	bpv__HP__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
	bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__HP__pf, 0.000000);
	if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__Death__pf();
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_9(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue_2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__WalkSpeed__pf;
				}
				__CurrentState = -1;
				break;
			}
		case 61:
			{
				__CurrentState = 62;
				break;
			}
		case 62:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__K2Node_CustomEvent_Baff__pf), static_cast<uint8>(E__EBaffs__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 65;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(b0l__K2Node_CustomEvent_Baff__pf), static_cast<uint8>(E__EBaffs__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 63;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 63:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Add_FloatFloat(bpv__HP__pf, 10.000000);
				bpfv__CallFunc_FClamp_ReturnValue_2__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue_1__pf, 0.000000, 100.000000);
				bpv__HP__pf = bpfv__CallFunc_FClamp_ReturnValue_2__pf;
			}
		case 64:
			{
				if(::IsValid(bpv__WBMain__pf))
				{
					bpv__WBMain__pf->bpf__Buff__pf(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83DCFD645897FE07EBA79A76D24AA17]\", \"BE19624E491BA90B00FAD88EF7925288\", \"\u0417\u0434\u043e\u0440\u043e\u0432\u044c\u0435 \u0443\u0432\u0435\u043b\u0438\u0447\u0435\u043d\u043e!\")")	));
				}
				__CurrentState = -1;
				break;
			}
		case 65:
			{
				if(::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__RunSpeed__pf;
				}
			}
		case 66:
			{
				if(::IsValid(bpv__WBMain__pf))
				{
					bpv__WBMain__pf->bpf__Buff__pf(FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[A83DCFD645897FE07EBA79A76D24AA17]\", \"0D05D1624189B23EFEE746AE8EF2DAEE\", \"\u0421\u043a\u043e\u0440\u043e\u0441\u0442\u044c \u0443\u0432\u0435\u043b\u0438\u0447\u0435\u043d\u0430!\")")	));
				}
			}
		case 67:
			{
				UKismetSystemLibrary::RetriggerableDelay(this, 10.000000, FLatentActionInfo(13, -1102680546, TEXT("ExecuteUbergraph_BP_Hero_9"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_10(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 15:
			{
				__CurrentState = 16;
				break;
			}
		case 16:
			{
				bpv__AutomaticFire__pf = false;
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__SuperShot__pf, 10.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 36:
			{
				bpv__SuperShot__pf = 0.000000;
			}
		case 37:
			{
				bpv__AutomaticFire__pf = true;
			}
		case 38:
			{
				UKismetSystemLibrary::RetriggerableDelay(this, 10.000000, FLatentActionInfo(15, 1624210958, TEXT("ExecuteUbergraph_BP_Hero_10"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_11(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	float  __Local__56 = 0.000000;
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(((::IsValid(bpv__SpringArm1__pf)) ? (bpv__SpringArm1__pf->TargetArmLength) : (__Local__56)), 50.000000);
	bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 800.000000, 1400.000000);
	if(::IsValid(bpv__SpringArm1__pf))
	{
		bpv__SpringArm1__pf->TargetArmLength = bpfv__CallFunc_FClamp_ReturnValue__pf;
	}
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_12(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsInViewport_ReturnValue__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	bool bpfv__CallFunc_SetGamePaused_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__InGameMenu__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpv__InGameMenu__pf))
				{
					bpfv__CallFunc_IsInViewport_ReturnValue__pf = bpv__InGameMenu__pf->UUserWidget::IsInViewport();
				}
				if (!bpfv__CallFunc_IsInViewport_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 4:
			{
				if(::IsValid(bpv__InGameMenu__pf))
				{
					bpv__InGameMenu__pf->RemoveFromParent();
				}
			}
		case 5:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue_1__pf = UGameplayStatics::SetGamePaused(this, true);
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				b0l__CallFunc_Create_ReturnValue_1__pf = CastChecked<UWB_InGameMenu_C__pf4176322116>(UWidgetBlueprintLibrary::Create(this, UWB_InGameMenu_C__pf4176322116::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				bpv__InGameMenu__pf = b0l__CallFunc_Create_ReturnValue_1__pf;
			}
		case 8:
			{
				if(::IsValid(bpv__InGameMenu__pf))
				{
					bpv__InGameMenu__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 9:
			{
				bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, true);
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_13(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 60);
	// optimized KCST_UnconditionalGoto
	float  __Local__57 = 0.000000;
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Subtract_FloatFloat(((::IsValid(bpv__SpringArm1__pf)) ? (bpv__SpringArm1__pf->TargetArmLength) : (__Local__57)), 50.000000);
	bpfv__CallFunc_FClamp_ReturnValue_1__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue_1__pf, 800.000000, 1400.000000);
	if(::IsValid(bpv__SpringArm1__pf))
	{
		bpv__SpringArm1__pf->TargetArmLength = bpfv__CallFunc_FClamp_ReturnValue_1__pf;
	}
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__ExecuteUbergraph_BP_Hero__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__WBMain__pf) && ::IsValid(bpv__WBMain__pf->bpv__WB_Inventory__pf))
	{
		bpv__WBMain__pf->bpv__WB_Inventory__pf->bpf__UpdateInventoryUI__pf(bpv__SDoc__pf);
	}
	return; //KCST_EndOfThread
}
void ABP_Hero_C__pf3231479144::bpf__Pause__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_12(1);
}
void ABP_Hero_C__pf3231479144::bpf__CheckFire__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_0(91);
}
void ABP_Hero_C__pf3231479144::bpf__StartCheckFire__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_4(82);
}
void ABP_Hero_C__pf3231479144::bpf__InpAxisEvt_TurnForward_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_3(80);
}
void ABP_Hero_C__pf3231479144::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_5(78);
}
void ABP_Hero_C__pf3231479144::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_6(76);
}
void ABP_Hero_C__pf3231479144::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_3(73);
}
void ABP_Hero_C__pf3231479144::bpf__Fire__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_1(72);
}
void ABP_Hero_C__pf3231479144::bpf__BuffHero__pf(E__EBaffs__pf bpp__Baff__pf)
{
	b0l__K2Node_CustomEvent_Baff__pf = bpp__Baff__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_9(61);
}
void ABP_Hero_C__pf3231479144::bpf__UpdateFoundItems__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_14(32);
}
void ABP_Hero_C__pf3231479144::bpf__Death__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_7(27);
}
void ABP_Hero_C__pf3231479144::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__58;
	T__Local__58& bpp__DamageType__pf = *const_cast<T__Local__58 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_8(23);
}
void ABP_Hero_C__pf3231479144::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Hero__pf_2(17);
}
void ABP_Hero_C__pf3231479144::bpf__InpActEvt_E_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_10(34);
}
void ABP_Hero_C__pf3231479144::bpf__InpActEvt_P_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_12(59);
}
void ABP_Hero_C__pf3231479144::bpf__InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_13(60);
}
void ABP_Hero_C__pf3231479144::bpf__InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Hero__pf_11(68);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Hero_C__pf3231479144::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Proj/Core/Character/Idle_Aiming.Idle_Aiming 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Proj/Core/Character/ShotGun.ShotGun 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/InfinityBladeEffects/Effects/FX_Monsters/FX_Monster_Gruntling/Master/P_BackPack_MuzzleFlash.P_BackPack_MuzzleFlash 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Proj/Sounds/51464__smcameron__bombexplosion.51464__smcameron__bombexplosion 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Hero_C__pf3231479144::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{43, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionStimuliSourceComponent 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AISense_Hearing 
		{35, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Proj/Core/Character/Idle_Aiming_Skeleton.Idle_Aiming_Skeleton 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Proj/Sounds/270421__littlerobotsoundfactory__footstep-dirt-08.270421__littlerobotsoundfactory__footstep-dirt-08 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Proj/Core/Character/BS_IdleRun.BS_IdleRun 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.HorizontalBox 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Engine/EngineResources/AICON-Green.AICON-Green 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonNormal.ButtonNormal 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonHovered.ButtonHovered 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/ButtonPressed.ButtonPressed 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/rect817.rect817 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Proj/Core/UI/Loading_Mat.Loading_Mat 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPersonJump_Loop.ThirdPersonJump_Loop 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPersonJump_Start.ThirdPersonJump_Start 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/Mannequin/Animations/ThirdPerson_IdleRun_2D.ThirdPerson_IdleRun_2D 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Proj/Placeables/Interactables/BP_InteractableBase.BP_InteractableBase_C 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BP_InteractableBase_C /Game/Proj/Placeables/Interactables/BP_InteractableBase.Default__BP_InteractableBase_C 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Proj/Sounds/426308__mtjohnson__hollywood-punch.426308__mtjohnson__hollywood-punch 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BehaviorTree /Game/Proj/Core/AI/BT_AI.BT_AI 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.BlackboardComponent 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.ActorPerceptionBlueprintInfo 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Mannequin/Character/Mesh/UE4_Mannequin_Skeleton.UE4_Mannequin_Skeleton 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Mannequin/Animations/ThirdPerson_Jump.ThirdPerson_Jump 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Proj/Placeables/Interactables/Elevator/BP_Elevator.BP_Elevator_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BP_Elevator_C /Game/Proj/Placeables/Interactables/Elevator/BP_Elevator.Default__BP_Elevator_C 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/MediaAssets.MediaPlayer 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MediaPlaylist /Game/Proj/Core/UI/Loadings.Loadings 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MediaTexture /Game/Proj/Core/UI/Loading.Loading 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MediaPlayer /Game/Proj/Core/UI/LoadingPlayer.LoadingPlayer 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Proj/Core/UI/Scene.Scene 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_Loading.WB_Loading_C 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_InGameMenu.WB_InGameMenu_C 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Proj/Core/AI/BP_EnemyBase.BP_EnemyBase_C 
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_Main.WB_Main_C 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Proj/Core/UI/WB_Inventory.WB_Inventory_C 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Proj/Core/Character/AB_Hero.AB_Hero_C 
		{122, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Proj/Data/SDocs.SDocs 
		{133, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Proj/Core/EBaffs.EBaffs 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Hero_C__pf3231479144
{
	FRegisterHelper__ABP_Hero_C__pf3231479144()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Proj/Core/BP_Hero"), &ABP_Hero_C__pf3231479144::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Hero_C__pf3231479144 Instance;
};
FRegisterHelper__ABP_Hero_C__pf3231479144 FRegisterHelper__ABP_Hero_C__pf3231479144::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
