#include "SBZPlaceableHealthData.h"

USBZPlaceableHealthData::USBZPlaceableHealthData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableHealthData::StaticClass();
}


