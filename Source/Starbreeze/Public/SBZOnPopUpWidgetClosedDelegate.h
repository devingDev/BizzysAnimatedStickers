#pragma once
#include "CoreMinimal.h"
#include "SBZOnPopUpWidgetClosedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSBZOnPopUpWidgetClosed, FName, ClosingActionName);

