// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WormHole_UE4GameMode.h"
#include "WormHole_UE4Pawn.h"

AWormHole_UE4GameMode::AWormHole_UE4GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AWormHole_UE4Pawn::StaticClass();
}
