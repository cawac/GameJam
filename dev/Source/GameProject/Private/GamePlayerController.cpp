// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayerController.h"

AGamePlayerController::AGamePlayerController() {
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}