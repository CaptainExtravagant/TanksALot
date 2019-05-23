// Fill out your copyright notice in the Description page of Project Settings.

#include "GI_TanksALot_CPP.h"
#include "MoviePlayer/Public/MoviePlayer.h"

void UGI_TanksALot_CPP::Init()
{
	Super::Init();

	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UGI_TanksALot_CPP::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UGI_TanksALot_CPP::EndLoadingScreen);
}

void UGI_TanksALot_CPP::BeginLoadingScreen(const FString& MapName)
{
	
	FLoadingScreenAttributes LoadingScreen;

	LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;
	LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();

	GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);

	


}

void UGI_TanksALot_CPP::EndLoadingScreen(UWorld* InLoadedWorld)
{

}


