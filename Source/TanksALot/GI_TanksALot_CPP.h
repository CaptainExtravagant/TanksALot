// Fill out your copyright notice in the Description page of Project Settings.
//https://wiki.unrealengine.com/Loading_Screen
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_TanksALot_CPP.generated.h"

/**
 * 
 */
UCLASS()
class TANKSALOT_API UGI_TanksALot_CPP : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
	
	UFUNCTION()
		virtual void BeginLoadingScreen(const FString& MapName);

	UFUNCTION()
		virtual void EndLoadingScreen(UWorld* InLoadedWorld);

	
};
