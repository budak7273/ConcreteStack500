// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCircuitSubsystem.h"

void AFGCircuitSubsystem::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGCircuitSubsystem::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
void AFGCircuitSubsystem::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGCircuitSubsystem::CallPreReplication(UNetDriver* NetDriver){ }
AFGCircuitSubsystem* AFGCircuitSubsystem::Get(UWorld* world){ return nullptr; }
AFGCircuitSubsystem* AFGCircuitSubsystem::GetCircuitSubsystem(UObject* worldContext){ return nullptr; }
void AFGCircuitSubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCircuitSubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCircuitSubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCircuitSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCircuitSubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGCircuitSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGCircuitSubsystem::ShouldSave_Implementation() const{ return bool(); }
AFGCircuitSubsystem::AFGCircuitSubsystem(){ }
void AFGCircuitSubsystem::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGCircuitSubsystem::BeginPlay(){ }
void AFGCircuitSubsystem::Tick(float DeltaSeconds){ }
void AFGCircuitSubsystem::DebugRebuildAll(){ }
void AFGCircuitSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGCircuitSubsystem::ConnectComponents( UFGCircuitConnectionComponent* first,  UFGCircuitConnectionComponent* second){ }
void AFGCircuitSubsystem::DisconnectComponents( UFGCircuitConnectionComponent* first,  UFGCircuitConnectionComponent* second){ }
void AFGCircuitSubsystem::RemoveComponent( UFGCircuitConnectionComponent* component){ }
void AFGCircuitSubsystem::OnRep_ReplicatedCircuits(){ }
int32 AFGCircuitSubsystem::GenerateUniqueCircuitID(){ return int32(); }
void AFGCircuitSubsystem::MergeCircuits(int32 first, int32 second){ }
int32 AFGCircuitSubsystem::CreateCircuit(TSubclassOf<  UFGCircuit > circuitClass){ return int32(); }
void AFGCircuitSubsystem::RemoveCircuit(int32 circuitID){ }
void AFGCircuitSubsystem::AddComponentToCircuit( UFGCircuitConnectionComponent* component, int32 circuitID){ }
