#include "SBZSkillManipulatorManipulatorAced.h"

USBZSkillManipulatorManipulatorAced::USBZSkillManipulatorManipulatorAced() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillManipulatorManipulatorAced::StaticClass();
}


