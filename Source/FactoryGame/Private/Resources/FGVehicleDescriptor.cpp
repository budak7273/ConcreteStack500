// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGVehicleDescriptor.h"

#if WITH_EDITOR
void UFGVehicleDescriptor::SetupStage(){ }
FVector UFGVehicleDescriptor::GetCenterOfCollision(){ return FVector(); }
#endif 
UFGVehicleDescriptor::UFGVehicleDescriptor(){ }
void UFGVehicleDescriptor::PostLoad(){ Super::PostLoad(); }
TSubclassOf< class AFGVehicle > UFGVehicleDescriptor::GetVehicleClass(TSubclassOf< UFGVehicleDescriptor > inClass){ return TSubclassOf<class AFGVehicle>(); }
FText UFGVehicleDescriptor::GetItemNameInternal() const{ return FText(); }
FText UFGVehicleDescriptor::GetItemDescriptionInternal() const{ return FText(); }
TSubclassOf< class AFGHologram > UFGVehicleDescriptor::GetHologramClassInternal() const{ return TSubclassOf<class AFGHologram>(); }
TSubclassOf< AActor > UFGVehicleDescriptor::GetBuildClassInternal() const{ return TSubclassOf<AActor>(); }
FText UFGVehicleDescriptor::mOverrideDisplayNameAndDescription = FText();
